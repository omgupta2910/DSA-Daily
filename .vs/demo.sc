object Demo {
  class Student(var rollno: Int = 19, var name: String = "om") {
    def display(): Unit = {
      println(s"Roll No: $rollno, Name: $name")
    }
  }
  
  def main(args: Array[String]): Unit = {
    var s1 = new Student()
    s1.display() // prints "Roll No: 19, Name: om"
    
     // prints "Roll No: 20, Name: Alice"
  }
}

