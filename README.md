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
if VAR is "number" then VAR is !"letter";
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
"cat" is ("animal" and "alive");
```
Disjunction
```
OBJECT is ("dead" or "alive");
```
Implication:
```
if "cat" is "animal" then "cat" is !"human";
```

The following queries are possible:
```
- is "cat" "animal?"
yes
```
```
- is "cat"?
yes
```