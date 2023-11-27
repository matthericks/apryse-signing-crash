import PDFNet
import Tools

@objc(CrashingPdfTronService)
public class CrashingPdfTronService: NSObject {
    private static let usLetterRect: PTPDFRect = PTPDFRect(x1:0, y1: 0, x2: 612, y2: 792)

    @objc
    public static func Initialize(key: String) {
        PTPDFNet.initialize(key)
    }

    @objc
    public static func GenerateDocument(templatePath: String, jsonString: String, outputPath: String) {
        let templateDoc: PTTemplateDocument = PTConvert.createOfficeTemplate(templatePath, options: nil)
        let pdfDoc: PTPDFDoc = templateDoc.fillTemplateJson(jsonString)
        pdfDoc.save(toFile: outputPath, flags: e_ptremove_unused.rawValue)
    }

    @objc
    public static func AddSignatureField(documentPath: String, fieldName: String, page: UInt32, x: Double, y: Double, width: Double, height: Double, outputPath: String) {
        let doc: PTPDFDoc = PTPDFDoc(filepath: documentPath)
        let page: PTPage = doc.getPage(page)
        let certification_sig_field: PTDigitalSignatureField = doc.createDigitalSignatureField("")
        let widgetAnnot: PTSignatureWidget = PTSignatureWidget.create(withDigitalSignatureField: doc, pos: PTPDFRect(x1: x, y1: y, x2: x + width, y2: y + height), field: certification_sig_field)

        page.annotPushBack(widgetAnnot)
        certification_sig_field.setDocumentPermissions(e_ptannotating_formfilling_signing_allowed)

        doc.save(toFile: outputPath, flags: 0)
    }

    @objc
    public static func Present(documentPath: String, savedCallback: (() -> Void)? = nil ,  view: UIView) {
        let documentController: PTDocumentController = PTDocumentController()
        documentController.popoverPresentationController?.sourceView = view

        let navigationController = UINavigationController(rootViewController: documentController)
        navigationController.modalPresentationStyle = .pageSheet

        var filePath: String = "file://"
        if !documentPath.starts(with: "file://") {
            filePath.append(documentPath)
        } else {
            filePath = documentPath
        }

        if let documentUrl = URL(string: filePath) {
            documentController.openDocument(with: documentUrl)

            if var topController = UIApplication.shared.keyWindow?.rootViewController {
                while let presentedViewController = topController.presentedViewController {
                    topController = presentedViewController
                }
                topController.present(navigationController, animated: true, completion: nil)
            }
        }
    }
}
