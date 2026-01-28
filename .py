class Student:
    def __init__(self, name):
        self.name = name

class Course:
    def __init__(self, title):
        self.title = title

class Registration:
    def __init__(self, student, course):
        self.student = student
        self.course = course

    def display(self):
        print(self.student.name, "registered for", self.course.title)


s = Student("Josh")
c = Course("Computer Programming")
r = Registration(s, c)
r.display()
