let n=359;
function inverti_cifre(num) {
    let s=num.toString(); //converto n da numero a stringa
    let r="";
    for (let i=s.length-1;i>=0;i--) { //uso il for decrementando i per invertire le cifre di s
        r+=s.charAt(i);
    }
    return r; //contiene le cire di n al contrario
}
console.log(inverti_cifre(n)); //richiamo la funzione
