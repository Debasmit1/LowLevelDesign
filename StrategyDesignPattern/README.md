"is a" relationship is inheritance
   |\
   | \
---|  \
   |  /
   | /
   |/

"has a"
   \
--- .
   /


The Strategy pattern suggests that you take a class that does something specific in a lot of different ways and extract all of these algorithms into separate classes called strategies.

Application
-> Use the Strategy pattern when wanted to use different variants of an algorithm within an object and be able to switch from one algorithm to another during runtime.

-> Use the Strategy when you have a lot of similar classes that only differ in the way they execute some behavior.

-> Use the pattern to isolate the business logic of a class from the implementation details of algorithms that may not be as important in the context of logic.

-> Use the pattern when your class has a massive conditional statement that switches between different variants of the same algorithm.