import java.util.Scanner

class MatrixSum(private val r: Int, private val c: Int) {
    private val x = Array(r) { IntArray(c) }
    private val y = Array(r) { IntArray(c) }
    private val z = Array(r) { IntArray(c) }
    fun input() {
        val sc = Scanner(System.in)
        println("Enter elements of the 1st Matrix:")
        for (i in 0 until r) {
            for (j in 0 until c) {
                x[i][j] = sc.nextInt()
            }
        }
        println("Enter elements of the 2nd Matrix:")
        for (i in 0 until r) {
            for (j in 0 until c) {
                y[i][j] = sc.nextInt()
            }
        }
    }
    fun calculate() {
        for (i in 0 until r) {
            for (j in 0 until c) {
                z[i][j] = x[i][j] + y[i][j]
            }
        }
    }
    fun display() {
        println("Output Matrix:")
        for (i in 0 until r) {
            for (j in 0 until c) {
                print("${z[i][j]}\t")
            }
            println()
        }
    }
}
fun main() {
    val sc = Scanner(System.in)
    println("Enter rows and columns of the matrix:")
    val r = sc.nextInt()
    val c = sc.nextInt()

    val obj = MatrixSum(r, c)
    obj.input()
    obj.calculate()
    obj.display()
}
