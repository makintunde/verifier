# Verifier #

A verifier for logical formulas.

This project has been discontinued. See [haskell-verifier](https://github.com/makintunde/haskell-verifier).

## In Progress ##
There are a couple of things to do:
* Evaluate formulae on [Kripke Models](https://en.wikipedia.org/wiki/Kripke_semantics).
* Evaluate formulae in [Linear Temporal Logic (LTL)](https://en.wikipedia.org/wiki/Linear_temporal_logic), which is a modal temporal logic with modalities referring to time.
* Evaluate formulae in [Computation Tree Logic (CTL)](https://en.wikipedia.org/wiki/Computation_tree_logic) , where the model of time is tree-like, and the future isn't determined.


## Usage ##

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
> ( <> q -> <> !p ) -> <> ( !p & !q )

FALSE
```
