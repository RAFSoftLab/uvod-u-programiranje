---
title: Matrice
author: RAF
---

## Multidimanzionalni nizovi

Multidimenzionalni nizovi su nizovi većih dimenzija, što znači da imamo nizove čiji su elementi nizovi, koji opet kao elemente mogu imati nizove. 

Multidimenzionalni nizovi deklarišu se na sledeći način:

```
tip naziv[velicina1][velicina2][velicina3]..[velicina4]; 
```

## Matrice

Od multidimenzionalnih nizova najčešće se koristi dvodimenzionalni niz koji se još naziva i matrica, a to je niz čiji su elementi jednodimenzionalni nizovi i deklariše se na sledeći način:

```
tip dvodimenzionalniNiz [m][n];
```

Ovakav dvodimenzionalni niz se može predstaviti i kao tabela koja ima m vrsta i n kolona. 

Ako bismo imali niz a[2][3], njegove vrednosti bi se tabelarno mogle predstaviti na sledeći način:

Ovde vidimo da se elementi jednodimenzionalnog niza identifikuju sa a[i][j] gde su i i j pozitivni celi brojevi i predstavljaju indekse nizova. 
Dvodimenzionalni nizovi se mogu inicijalizovati na sličan način kao jednodimenzionalni, dodelom vrednosti svim elementima niza na sledeći način:

```
int a[3][4] = {
    {0, 1, 2, 3} ,    /*  inicijalizacija vrste sa indeksom 0 */
    {4, 5, 6, 7} ,    /*  inicijalizacija vrste sa indeksom 1 */
    {8, 9, 10, 11}   /*  inicijalizacija vrste sa indeksom 2 */
};
```

Slično kao kod jednodimenzionlnih nizova navode se elementi nizova u vitičastim zagradama, ali pošto su elementi niza opet nizovi umesto jednostavnih vrednosti imamo opet elemente u vitičastim zagradama. 

