# Adaptive LLD Curriculum

This is a topic map, not a fixed schedule. Advance using demonstrated understanding. Reorder or revisit topics when a question exposes a gap. Keep each session near the learner's one-hour target, and teach only the minimum prerequisite needed for the current exercise.

## Stage 0: Learn to see a design problem

Outcomes:
- Separate requirements, constraints, assumptions, and implementation choices.
- Find actors, use cases, nouns, behaviors, state, rules, and invariants.
- Assign a responsibility by asking who has the required information.
- Build the smallest working model and recognize likely change points.
- Explain coupling, cohesion, abstraction, and encapsulation through code pain.

Starter exercises:
- Model a traffic light.
- Model a shopping cart with pricing rules.
- Refactor one class that handles data, decisions, and output.

## Stage 1: Java object-design foundations

Derive these through exercises rather than teaching definitions first:
- Classes, interfaces, abstract classes, and object collaboration
- Encapsulation and protecting invariants
- Composition versus inheritance
- Polymorphism as replacement of behavior
- Dependency direction and dependency injection without a framework
- SOLID principles as diagnostic tools, not laws
- Basic UML/class and sequence sketches
- Testability and identifying seams

Checkpoint: design a small order-pricing model, explain responsibilities, and safely add a new pricing rule.

## Stage 2: Behavioral variation patterns

Teach each from an evolving naive design:
- Strategy: interchangeable policy or algorithm
- State: behavior dependent on lifecycle state
- Observer: multiple reactions to an event
- Command: represent and queue an action
- Chain of Responsibility: ordered handlers with independent decisions
- Template Method: stable algorithm with controlled variation; compare with composition

For every pattern, require:
- The pain before the pattern
- Recognition signals and counter-signals
- A plain Java implementation
- Trade-offs and a simpler alternative
- A transfer problem where the pattern name is hidden

## Stage 3: Object creation and structure

- Simple Factory and Factory Method
- Abstract Factory only when families of related objects create real pressure
- Builder for readable construction and valid complex objects
- Adapter for incompatible contracts
- Decorator for composable behavior
- Facade for simplifying a subsystem
- Composite for part-whole structures
- Proxy for controlled access
- Singleton as a cautionary trade-off, not a default

Checkpoint: compare at least two valid designs for the same changing requirement.

## Stage 4: Complete LLD problems

Recommended progression:
1. Tic-Tac-Toe
2. Vending Machine
3. Parking Lot
4. Library Management
5. Elevator
6. Notification System at the object-design level
7. Splitwise-style Expense Sharing
8. Cab Booking at the object-design level
9. Snake and Ladder or Chess, depending on current gaps

For each problem:
- Clarify requirements before class identification.
- Produce a simple model and walk through core flows.
- Introduce change requests one at a time.
- Add patterns only where pressure justifies them.
- Implement the riskiest behavior in Java rather than generating all boilerplate.
- Review edge cases, extensibility, testability, and trade-offs.

## Stage 5: Interview independence

- Timed requirement clarification
- Responsibility and invariant discovery
- Whiteboard-level class and sequence design
- Focused Java implementation
- Responding to changing requirements
- Explaining alternatives and trade-offs
- Detecting overengineering
- Full mock interviews with feedback

## Review rhythm

- Begin sessions with one retrieval question from an older topic.
- After every 2–3 related topics, use a mixed recognition exercise.
- After each complete problem, ask the learner to redesign one weak area.
- Periodically revisit an early solution and improve it using only justified changes.
- Judge mastery by transfer to an unfamiliar problem, not recall of definitions.
- Use learner questions and points of confusion as evidence for what to revisit.
- Keep nonessential related concepts in a parking lot and introduce them only when the curriculum reaches them or they become necessary.

## Topic lesson template

1. Scenario and current requirement
2. Learner's natural approach
3. Minimal working design
4. New change that creates pain
5. Diagnosis of the design pressure
6. Simple meaning and real-world analogy for the emerging concept
7. Technical mental model with a compact relationship or flow diagram
8. Derived improvement and pattern/principle vocabulary
9. Java implementation or focused prototype
10. Comparison: why plausible alternatives fit or fail
11. Costs, misuse, and parked related concepts
12. Hidden transfer exercise, learner answer, gap diagnosis, and teach-back
