# Verifier

A verifier for logcal formulas.

# Usage

```bash
Define propositional variables:
> p, q

Define set of worlds W:
> w1, w2, w3, w4

Define the relations on W:
> (w2 w1), (w3 w2), (w4 w2), (w4 w3), (w3 w3)

Define the valuations for p:
> w2, w4

Define the valuations for q:
> w2, w3, w4

Enter the specific world:
> w3

Enter the formula to verify:
> ( <> q => <> !p ) => <> ( !p & !q )

FALSE
```
