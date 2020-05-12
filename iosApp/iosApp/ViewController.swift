import UIKit
import app

class ViewController: UIViewController, QuestionViewContract, PlatformProtocol {
    
    var presenter: QuestionPresenterContract!
    
    let questions = [
        "Christian Bale played Batman in \'The Dark Knight Rises\'?",
        "The Gremlins movie was released in 1986?",
        "Brad Pitt played Danny Ocean in Ocean\'s Eleven, Ocean\'s Twelve and Ocean\'s Thirteen?",
        "A spoon full of sugar\' came from the 1964 movie Mary Poppins?",
        "The song “I don\'t want to miss a thing” featured in Armageddon?",
        "Will Smith has a son called Jaden?",
        "Mark Ruffalo played Teddy Daniels in Shutter Island?",
        "Mike Myers starred in the \'Cat in the Hat\' 2003 children\'s movie?",
        "Ryan Reynolds is married to Scarlett Johansson?",
        "The movie \'White House Down\' was released in 2014?",
        "Michael Douglas starred in Basic Instinct, Falling Down and The Game?",
        "Colin Firth won an Oscar for his performance in the historical movie \'The King\'s Speech\'?",
        "Cameron Diaz and Ashton Kutcher starred in the movie \'What happens in Vegas\'?",
        "Arnold Schwarzenegger played lead roles in Rocky, Rambo and Judge Dredd?",
        "The Titanic movie featured the song \'My Heart Will Go On\'?",
        "Eddie Murphy narrates the voice of Donkey in the Shrek movies?",
        "Nicole Kidman played Poison Ivy in \'Batman and Robin\'?",
        "The Lara Croft: Tomb Raider movie was released in 2003?",
        "Hallie Berry played the character Rogue in X Men?",
        "The Teenage Mutant Ninja Turtles are named after famous artists?"
    ]
    
    let answers = [
        "true",
        "false",
        "false",
        "true",
        "true",
        "true",
        "false",
        "true",
        "false",
        "false",
        "true",
        "true",
        "true",
        "false",
        "true",
        "true",
        "false",
        "false",
        "false",
    ]
    
    func getQuestionResources() -> QuestionResources {
        
        return QuestionResources(
          trueLabel: "True",falseLabel: "False",
          cheatLabel: "Cheat",nextLabel: "Next",
          correctLabel: "Correct",incorrectLabel: "Incorrect",
          questions: questions, answers: answers
        )
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
    
        configure()
        presenter.fetchScreenData()
    }
    
    func configure() {
        let platform = PlatformResources(view: self)
        platform.setImplementation(protocol: self)
        
        let mediator = AppMediator()
        
        presenter = QuestionPresenter(state: mediator.questionState)
        presenter.view = self
        presenter.router = QuestionRouter(mediator: mediator)
        
        let model = QuestionModel(resources: platform.getQuestionResources())
        presenter.model = model
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    @IBOutlet weak var questionLabel: UILabel!
    
    @IBOutlet weak var resultLabel: UILabel!
    
    @IBAction func trueButton(_ sender: Any) {
        presenter.clickTrueButton()
    }
    
    @IBAction func falseButton(_ sender: Any) {
        presenter.clickFalseButton()
    }
    
    @IBAction func cheatButton(_ sender: Any) {
        presenter.clickCheatButton()
    }
    
    @IBAction func nextButton(_ sender: Any) {
        presenter.clickNextButton()
    }
    
    func displayQuestionData(viewModel: QuestionViewModel) {
        
        questionLabel.text = viewModel.questionText!
        resultLabel.text = viewModel.resultText
    }
    
    func navigateToCheatScreen() {
        
    }
}
