let book={Titolo:"Imperfetti", Autore:"Luigi Ballerini", Pubblicazione:2016, Genere:"romanzo distopico", Pagine:336};
// Stampa le proprieta' dell'oggetto sulla console
for (let key in book) {
  //stampiamo nome della chiave e valore associato
  console.log(`${key} -> ${book[key]}`);
}
