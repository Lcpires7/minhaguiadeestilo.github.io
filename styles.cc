 *{
    font-family: sans-serif;
 }
body {
    width:100%;
    min-width: 500px;
}

main {
    width: 80%;
    margin: 0 auto;
}

h1.title {
    font-size: 30px;
    margin: 30px 0;
    font-weight: bold;
}

section {
    margin: 30px auto;
    border: 3px dashed black;
    padding: 30px 20px;
    text-align: center;
    border-radius: 45px;
}

section h2 {
    font-style: bold;
    font-size: 30px;
}

/*Estilização da section de 'class = "cores"'*/
div.cor {
    width: 25%;
    padding: 20px 0;
    border: solid black 1px;
    margin: 30px 20px;
    display: inline-block;
    text-align: center;
    border-radius: 5px 15px 5px 15px;;
    
}

div.cor span {
    display: block;
    margin: 5px 0;
}

.red {
    background-color: red;
    font-weight: bold;
}

.green {
    background-color: green;
    font-weight: bold;
}

.blue {
    background-color: blue;
    color:white;
    font-weight: bold;
}

.yellow {
    background-color: yellow;
    font-weight: bold;
}

.black {
    background-color: black;
    color: white;
    font-weight: bold;
}

.white {
    font-weight: bold;
}

/*Estilização da section de 'class = "fontes"'*/
div.fonte {
    border: solid 1px black;
    display: inline-block;
    width: 40%;
    margin: 30px 20px;
    padding: 20px 20px 20px 20px;
    border-radius: 5px 15px 5px 15px;
    text-align: left;
    box-sizing: border-box;
    min-width: 170px;
}

div.fonte h3{
    font-size: 20px;
    margin-bottom: 15px;
    border-bottom: 2px solid rgb(0, 0, 0);
}

div.fonte h3 a {
    color: blue;
    text-decoration: none;
}

div.fonte p{
    margin: 3px 0;
}

div.roboto p{
    font-family: 'Roboto', sans-serif;
}

div.source_code_pro p {
    font-family: 'Source Code Pro', monospace;
}

div.mali p{
    font-family: 'Mali', cursiva;
}

div.playfair_display p{
    font-family: 'Playfair Display', serif;
}

div.fonte p.fonte_forte{
    font-weight: bold;
}

div.fonte p.fonte_italico {
    font-style: italic;
}

/*Estilização da section de 'class = "estilos"'*/

div.estilo {
    width: 80%;
    border: 1px solid black;
    display: inline-block;
    margin: 20px 20px;
    border-radius: 5px 15px 5px 15px;
    padding: 20px 20px;
}

div.estilo h3 {
    margin-bottom: 15px;
    font-weight: bold;
}

div.estilo {
    text-align: center;
}

div.estilo ul {
    display: inline-block;
    margin: 0 auto;
    
}

div.estilo ul li {
    list-style:inside;
    text-align: left;
    
}

.cabecario {
    font-weight: bold;
    font-size: 35px;
    font-family: 'Roboto', sans-serif;
}

.subtitulo {
    font-weight: bold;
    font-size: 24px;
    font-family: 'Mali', cursive;
}

.paragrafo{
    font-weight: normal;
    font-size: 17px;
    font-family: 'Mali', cursive;
}
