Funkcija napraviStudenta: Pomoću (Student* )malloc(sizeof(Student)) alociramo mesto u memoriji za novog studenta, sve potrebne podatke prekopiramo i vratimo pokazivač na studenta.
Funkcija dodajStudenta: Ukoliko je lista prazna, početak liste će biti čvor koji se sada dodaje tj. novi, pa ćemo njega vratiti.
Pošto dodajemo na kraj liste, potrebno je doći do zadnjeg čvora u listi, i na njega nadovezati novi čvor. Zadnji čvor je čvor kome je sledeći element NULL.
