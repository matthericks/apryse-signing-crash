import UIKit
import PDFNet
import WebKit

public class ViewController: UIViewController {

    var signatureField: PTDigitalSignatureField!

    var vc: UIViewController = UIViewController()

    public override func viewDidLoad() {
        super.viewDidLoad()

        let button = UIButton(frame: CGRect(x: 10, y: 10, width: 100, height: 50))
        button.backgroundColor = UIColor.green
        button.setTitle("create", for: .normal)
        button.addTarget(self, action: #selector(tap), for: .touchUpInside)
        self.view.addSubview(button)

    }

    public override func viewDidAppear(_ animated: Bool) {

    }

    @objc func tap(_ sender: Any) {
        Task {
            openAction()
        }
    }

    @objc func openAction() {
        let dictionary = ["date": "12/12"]
        guard let theJSONData = try? JSONSerialization.data(withJSONObject: dictionary, options: []) else {
            return
        }
        let theJSONText = String(data: theJSONData, encoding: .ascii)!

        let templatePath = Bundle.main.path(forResource: "template", ofType: "docx")!
        let outputPath = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask).first!.appendingPathComponent("test.pdf").path()

        CrashingPdfTronService.GenerateDocument(templatePath: templatePath, jsonString: theJSONText, outputPath: outputPath)
        CrashingPdfTronService.AddSignatureField(documentPath: outputPath, fieldName: "test", page: 1, x: 100, y: 100, width: 400, height: 100, outputPath: outputPath)
        CrashingPdfTronService.Present(documentPath: outputPath, savedCallback: nil, view: self.view);
    }


}

