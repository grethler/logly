Comment syntax:
```
& This is a comment
```
Line Ending:
```
;
```
Atoms: (quotation)
```
"......"
```
Variables: (uppercase only, no quotation)
```
VAR
```
The following statements are possible:
```
"cat" is "animal";
```
Negation:
```
"cat" is !"dog";
```
Conjunction:
```
"cat" is ("animal" and C);
```
Disjunction
```
"cat" is ("animal" or C);
```
Implication:
```
if "cat" is "animal" then "cat" is !"human";
```

The following queries are possible:
```
is cat animal?              (checks if ... is ...)
is cat?                     (checks if ... exists)
give cat?                   (returns all ... is ...)
```