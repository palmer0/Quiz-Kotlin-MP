package sample

import androidx.fragment.app.FragmentActivity

actual class PlatformResources actual constructor(
  private val view: QuestionViewContract
) {

  actual fun getQuestionResources(): QuestionResources {
    val activity = view as FragmentActivity
    val resources = activity.resources

    val falseLabel = resources.getString(R.string.false_label)
    val trueLabel = resources.getString(R.string.true_label)
    val nextLabel = resources.getString(R.string.next_label)
    val cheatLabel = resources.getString(R.string.cheat_label)
    val correctLabel = resources.getString(R.string.correct_label)
    val incorrectLabel = resources.getString(R.string.incorrect_label)

    val questions = resources.getStringArray(R.array.questions)
    val answers = resources.getStringArray(R.array.answers)

    return QuestionResources(
      trueLabel, falseLabel, cheatLabel, nextLabel,
      correctLabel, incorrectLabel, questions.toList(), answers.toList()
    )
  }
}