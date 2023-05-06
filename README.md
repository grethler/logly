Comment syntax:
```
& This is a comment
```

The following statements are possible:
```
cat is animal;
cat is !dog;                             (Negation)
cat is (animal and C);                   (Conjunction)
cat is (animal or C);                    (Disjunction)
cat is (animal and (!C or D));     
if cat is animal then cat is !human;     (Implication)
if ((A and B) is C) and ((D and B) is C) then (A and D) is E;
```

The following queries are possible:
```
is cat animal?              (checks if cat is B)
is cat?                     (checks if exists)
is (cat and dog) animal?
give cat?                   (returns all cat is ...)
```