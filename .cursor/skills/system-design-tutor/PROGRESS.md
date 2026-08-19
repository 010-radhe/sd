# Learning Progress

## Current profile

- Scope: Low-level design only
- Java: Basic
- Backend knowledge: Some
- Goal: Build understanding and confidence, then crack system-design interviews
- Pace: About one hour per day
- Style: Practical, concept-first, and guided; tutor explains in small steps and learner asks questions when confusion appears
- Best learning loop: Guided concept → mental picture → real example → learner's question/confusion → targeted breakdown → application
- Explanation needs: Simple meaning, analogy, technical detail, compact diagrams/flows, and behind-the-scenes relationships
- Pattern-learning need: Begin with normal Java, show that it is initially valid, then evolve it until each concrete problem becomes visible before introducing the pattern
- Code-learning need: Show realistic interfaces, implementations, files/packages, client code, object creation, references, calls, and before/after diagrams—not isolated snippets
- Diagram-learning need: Always pair normal and after-pattern UML class diagrams plus UML sequence diagrams; explain changed relationships, dependencies, creation ownership, and runtime messages
- Scope guardrail: Teach the minimum needed first; park related concepts to avoid overload

## Current position

- Stage: 3 — Creational patterns
- Status: Abstract Factory normal implementation in progress
- Recommended next lesson: Repair and run the normal implementation, then identify its concrete growth pressures before refactoring

## Demonstrated strengths

- Correctly modeled `Chair` and `Table` as product interfaces
- Correctly created Modern and Victorian implementations for both product types
- Correctly recognized that a creator and client/service are separate responsibilities

## Concepts completed

- Singleton, Builder, and Factory are self-reported as previously studied; transfer understanding is not yet verified

## Misconceptions or gaps to revisit

- Abstract Factory: pattern was introduced before the need and weaknesses of the normal approach were made concrete
- Abstract Factory: needs a bigger-picture walkthrough connecting multi-file normal code, growth problems, the patterned structure, and runtime object communication
- Java execution model: distinguish declarations allowed in a class body from executable statements that belong in a constructor or method
- Object lifecycle and responsibility: decide explicitly whether `Main`, `RoomService`, or `FurnitureCreator` creates and retains each object
- Implementation workflow: compile and run one thin vertical flow before adding the next layer

## Parked topics

- None recorded yet

## Practice history

- 2026-08-19 — Built the multi-file normal furniture implementation. Product hierarchy was mostly correct; implementation stalled at wiring object creation through `RoomService`.

## Next step

Move `RoomService` creation statements into an explicit method, remove unnecessary creator state, correct style branches and messages, then trace one Modern request from `Main` to the concrete objects.

## Update format

After a meaningful milestone, add a dated entry containing:
- Topic or exercise
- What the learner demonstrated without help
- Hints required
- Remaining misconception or uncertainty
- Related topics parked for later
- Recommended next action

Keep evidence concise. Preserve prior entries so progress is visible over time.
