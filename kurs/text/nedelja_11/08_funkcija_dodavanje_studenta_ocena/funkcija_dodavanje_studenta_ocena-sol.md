Funkcija napraviStudenta: Pomoću (Student* )malloc(sizeof(Student)) alociramo mesto u memoriji za novog studenta, sve potrebne podatke prekopiramo i vratimo pokazivač na studenta.
Funkcija dodajStudenta: Ukoliko je lista prazna, početak liste će biti čvor koji se sada dodaje tj. novi, pa ćemo njega vratiti.
Pošto dodajemo u uređenu liste po proseku rastuće, potrebno je doći do prvog čvora koji ima veći prosek od studenta koji se ubacuje. Prvo moramo da proverimo da li početni čvor ima veći prosek, ukoliko ima, na novi čvor ćemo nadovezati početni čvor, i vratiti novi čvor-to će biti novi početak liste.
Sada ostaje da prođemo kroz listu i nađemo prvi čvor koji ima veći prosek od novog čvora, kada nađemo, prevežemo pokazivače kako bismo umetnuli novi čvor. 
