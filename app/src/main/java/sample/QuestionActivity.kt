package sample

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import kotlinx.android.synthetic.main.activity_question.*


class QuestionActivity() : AppCompatActivity(), QuestionViewContract {

  override lateinit var presenter: QuestionPresenterContract

  override fun onCreate(savedInstanceState: Bundle?) {
    super.onCreate(savedInstanceState)
    setContentView(R.layout.activity_question)


    trueButton.setOnClickListener { presenter.clickTrueButton() }
    falseButton.setOnClickListener { presenter.clickFalseButton() }
    cheatButton.setOnClickListener { presenter.clickCheatButton() }
    nextButton.setOnClickListener { presenter.clickNextButton() }

    // Do the setup
    configure(this)

  }

  private fun configure(view: QuestionViewContract) {

    val router = QuestionRouter(AppMediator)

    val presenter = QuestionPresenter(AppMediator.questionState)
    //presenter.state = AppMediator.questionState
    presenter.view = view
    presenter.router = router

    val platform = PlatformResources(view)

    val model = QuestionModel(platform.getQuestionResources())
    presenter.model = model

    view.presenter = presenter

  }

  override fun onResume() {
    super.onResume()

    // Call the presenter to fetch the data
    presenter.fetchScreenData()
  }


  override fun displayQuestionData(viewModel: QuestionViewModel) {

    // Deal with the data, update the states, ui etc..
    with(viewModel) {

      questionField.text = questionText
      resultField.text = resultText

      trueButton.text = trueLabel
      falseButton.text = falseLabel
      cheatButton.text = cheatLabel
      nextButton.text = nextLabel

      trueButton.isEnabled = trueEnabled
      falseButton.isEnabled = falseEnabled
      cheatButton.isEnabled = cheatEnabled
      nextButton.isEnabled = nextEnabled
    }

  }

  override fun navigateToCheatScreen() {
    /*
    val intent = Intent(baseContext, CheatActivity::class.java)
    intent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK)
    startActivity(intent)
    */
  }

  companion object {
    const val TAG = "QuestionActivity"
  }
}