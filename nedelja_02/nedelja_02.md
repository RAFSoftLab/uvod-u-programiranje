## Relacioni operatori

Rezultat izvršavanja relacionih operatora je vrednost tačno ili netačno koje se u jeziku C predstavljaju celobrojnim vrednostima 0 za netačno i broj različit od nule za tačno. Relacioni operatori koriste se za poređenje vrednosti operanada, na primer da li su jednake ili različite, da li jedan operand ima veću vrednost od druge i slično. 

Relacioni operatori u programskom jeziku se dati su u tabeli. 

|Operator|Opis|	Primer A = 10, B=6|
|---------|-----|----------|
|==|proverava da li su dva operanda jednaka i vraća tačno ako jesu, inače vraća netačno|(A == B) je 0|
|!=|proverava da li su dva operanda različita i vraća tačno ako jesu, inače vraća netačno|(A != B) je 1| 
|>|proverava da li je vrednost levog operanda veća i vraća tačno ako jeste|(A > B) je tačno|
|<|proverava da li je vrednost levog operanda manja i vraća tačno ako jeste|(A < B) je 0|
|>=|proverava da li je vrednost levog operanda veća ili jednaka i vraća tačno ako jeste|(A >= B) je 1|
|<=|proverava da li je vrednost levog operanda manja ili jednaka vraća tačno ako jeste|(A <= B) nije 0|

## Logički operatori

Logički operatori kao operande uzimaju logičke promenljive, a to su tačno (true) i netačno (false) odnosno u C-u je to celobrojni tip pri čemu se vrednost 0 tumači kao netačno, a sve različito od nula kao tačno. 

|Operator|Opis|Primer, A=1, B=0|
|--------|----|----------------|
|&&|logički operator i (and), tačan je ako su oba operanda tačna, odnosno u C-u veća od 0|(A && B) je 0|
|\|\||logički operator ili (or), tačan ako je bar jedan od operanada tačan|(A \|\| B) je 1|
|!|logička negacija (not), tačan ako je operand netačan i netačan ako je operand tačan|!(A && B) je 1|


