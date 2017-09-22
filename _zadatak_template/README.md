# Zadatak

## `naziv-meta.md`
Fajl je obavezan i sadrzi meta podatke o zadatku. Potrebno je iskopirati sadrzaj template-a i popuniti vrednosti na kojima se nalazi `?`.

## `naziv-st.md`
Fajl je obavezan i sadrzi tekst zadatka. Treba ispostovati strukturu podnaslova i ako neki podnaslovi nisu potrebni obrisati ih.

## `naziv-sol.md`
Fajl je obavezan. Fajl sadrzi kratak opis resenja zadatka.

## `naziv-checker.cpp`
Fajl nije obavezan. Osnovna provera tacnosti poredi izlazni fajl korisnika sa ocekivanim fajlom ignorisuci whitespace karaktere. Ako je to dovoljno, ovaj fajl treba obrisati. Inace, treba implementirati logiku koja validira resenje (primer su zadaci kod kojih postoji vise validnih resenja).

## `naziv.c`
Fajl je obavezan. Resenje zadatka.

## `_build/test-data/`
Folder sadrzi test primere, ulazne i izlazne. Neophodno je da za svaki `X.in` fajl postoji odgovarajuci `X.out` fajl. Test primerima se dodeljuju indeksi na osnovu leksikografskog rasporeda `.in` fajlova u ovom folderu.

Primer zadatka nalazi se u folderu `_zadatak_primer/`
