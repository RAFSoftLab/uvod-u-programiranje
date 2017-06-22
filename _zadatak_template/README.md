# Zadatak

## `naziv-meta.yml`
Fajl je obavezan i sadrzi meta podatke o zadatku.

## `naziv-st.md`
Fajl je obavezan i sadrzi tekst zadatka. Treba ispostovati strukturu podnaslova i ako neki podnaslovi nisu potrebni obrisati ih.

## `naziv-sol.md`
Fajl nije obavezan. Ako je potrebno, treba opisati resenje zadatka.

## `naziv-check.cpp`
Osnovna provera tacnosti poredi izlazni fajl korisnika sa ocekivanim fajlom ignorisuci whitespace karaktere. Ako je to dovoljno, ovaj fajl treba obrisati. Inace, treba implementirati logiku koja validira resenje (primer su zadaci kod kojih postoji vise validnih resenja).

## `testcases`
Folder sadrzi test primere, ulazne i izlazne. Neophodno je da za svaki `X.in` fajl postoji odgovarajuci `X.out` fajl. Test primerima se dodeljuju indeksi na osnovu leksikografskog rasporeda `.in` fajlova u ovom folderu.

## `solutions`
Folder sadrzi resenje zadatka i eventualno alternativna resenja.
