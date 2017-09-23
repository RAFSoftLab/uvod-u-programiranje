## Analiza

Sa standardnog ulaza se učitava jedan četvorocifreni broj. Prvo se izdvoje cifra jedinice, cifra desetice, cifra stotine i cifra hiljade. Zatim se napravi broj tako što se ove cifre množe obrnutim redosledom težina osnove (**ne** od 10^0 do 10^3 **već** od 10^3 do 10^0) i sabira rezultate *CJ &ast; 1000 + CD &ast; 100 + CS &ast; 10 + CH*. Dobijeni broj se ispiše na standardni izlaz.
