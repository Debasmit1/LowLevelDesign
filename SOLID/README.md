SOLID

S -> Single Responsibilty Principle
O -> Open / Closed Principle
L -> Liskov Substitution Principle
I -> Interface Segmented Principle
D -> Dependency Inversion Principle

Advantages to write SOLID principle
-> Avoid duplicate code
-> Easy to maintain
-> Easy to understand
-> Flexible software
-> Reduce complexity

Single Responsibility Principle
-> A class should have only single reason to change
-> It gives the benefit of maintain and understand

Open / Closed Principle
-> Open for extension and closed for modification
If my project is live and if I do modification. It is prone to bugs. So always extend not modify the existing code

Liskov Substitution Principle
-> If Class B is subtype of Class A, then we should be able to replace object A with B without breaking the behavior of the program.
-> Subclass should extend the capability of parent class not narrow it down.

Interface Segmented Principle
-> Interfaces should be such that client should not implement unnecessary functions they do not need

Dependency Inversion Principle
-> Class should depend on interfaces rather than concrete classes