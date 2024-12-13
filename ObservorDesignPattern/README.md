We have
- Observable Interface(has a Observer Interface)
- Observable Concrete Class (is a Observable Interface)
- Observer Interface
- Observer Concrete Class (is a Observer Interface && has a Observable Concrete Class)

Observer is a behavioral design pattern that lets us define a subscription mechanism to notify multiple objects about any events that happen to the object they are observing.

APPLICATION
->  Use the observor pattern when changes of one object may require changing other objects, the actual set of objects is unknown beforehand or changes dynamically.
-> Use the pattern when some objects in the app must observe others, but only for a limited time or in specific cases.

