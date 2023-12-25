#include "shazam.h"

char *EN_SCRIPT[16] = {
	"You selected English", //0
	YRS"Answer the following questions to get your musical Christmas gift!"RESET, //1
	YG"Are you feeling the Christmas cheer?"RESET, //2
	"\n1) Yes\n2) No\n", //3
	YG"Are you feeling something chill or energetic?"RESET, //4
	"\n1) Chill\n2) Energetic\n", //5
	YG"Do you like Vulfpeck and/or Jazz?"RESET, //6
	"\n1) Yes\n2) No\n", //7
	YG"Did you know Saruman plays metal?"RESET, //8
	"\n1) Yes\n2) No\n", //9
	YG"Do you prefer Jazz or Country?"RESET, //10
	"\n1) Jazz\n2) Country\n", //11
	YG"Do you like Metal?"RESET, //12
	"\n1) Yes\n2) No\n", //13
	YRS"Wrapping present"RESET, //14
    C1"Be careful, if you don't answer the questions correctly\nfor example by putting more than one character in your answers\nyou might not get a Christmas present :("RESET //15
};

char *FR_SCRIPT[16] = {
	"Tu as choisi le Français", //0
	YRS"Réponds aux questions suivantes pour obtenir ton cadeau musical de Noël!"RESET, //1
	YG"Aimes-tu la musique de Noël?"RESET, //2
	"\n1) Oui\n2) Non\n", //3
	YG"Tu préfères quelquechose de chill ou plus dynamique?"RESET, //4
	"\n1) Chill\n2) Dynamique\n", //5
	YG"Aimes-tu le groupe 'Vulfpeck' et/ou le Jazz?"RESET, //6
	"\n1) Oui\n2) Non\n", //7
	YG"Savais-tu que Saruman jouait du métal?"RESET, //8
	"\n1) Oui\n2) Non\n", //9
	YG"Préfères-tu le Jazz ou le Country?"RESET, //10
	"\n1) Jazz\n2) Country\n", //11
	YG"Aimes-tu le métal?"RESET, //12
	"\n1) Oui\n2) Non\n", //13
	YRS"Emballage du cadeau"RESET, //14
    C1"Attention, si tu réponds pas correctement aux questions\npar exemple en mettant plus qu'un charactère dans tes réponses\ntu risques de ne pas avoir de cadeau de Noël :("RESET //15
};

char *ES_SCRIPT[16] = {
    "Has elegido el español", //0
    YRS"¡Responde las siguientes preguntas para obtener tu regalo musical de Navidad!"RESET, //1
    YG"¿Te gusta la música de Navidad?"RESET, //2
    "\n1) Sí\n2) No\n", //3
    YG"¿Prefieres algo relajado o más dinámico?"RESET, //4
    "\n1) Relajado\n2) Dinámico\n", //5
    YG"¿Te gusta el grupo 'Vulfpeck' y/o el Jazz?"RESET, //6
    "\n1) Sí\n2) No\n", //7
    YG"¿Sabías que Saruman tocaba metal?"RESET, //8
    "\n1) Sí\n2) No\n", //9
    YG"¿Prefieres el Jazz o el Country?"RESET, //10
    "\n1) Jazz\n2) Country\n", //11
    YG"¿Te gusta el metal?"RESET, //12
    "\n1) Sí\n2) No\n", //13
    YRS"Embalaje del regalo"RESET, //14
    C1"Atención, si no respondes correctamente a las preguntas,\npor ejemplo, al poner más de un carácter en tus respuestas,\n¡puede que no recibas un regalo de Navidad! :("RESET //15
};

char *DE_SCRIPT[16] = {
    "Du hast Deutsch ausgewählt", //0
    YRS"Beantworte die folgenden Fragen, um dein musikalisches Weihnachtsgeschenk zu erhalten!"RESET, //1
    YG"Fühlst du die Weihnachtsstimmung?"RESET, //2
    "\n1) Ja\n2) Nein\n", //3
    YG"Fühlst du etwas Entspanntes oder Energetisches?"RESET, //4
    "\n1) Entspannt\n2) Energetisch\n", //5
    YG"Magst du Vulfpeck und/oder Jazz?"RESET, //6
    "\n1) Ja\n2) Nein\n", //7
    YG"Wusstest du, dass Saruman Metal spielt?"RESET, //8
    "\n1) Ja\n2) Nein\n", //9
    YG"Bevorzugst du Jazz oder Country?"RESET, //10
    "\n1) Jazz\n2) Country\n", //11
    YG"Magst du Metal?"RESET, //12
    "\n1) Ja\n2) Nein\n", //13
    YRS"Geschenk verpacken"RESET, //14
    C1"Sei vorsichtig, wenn du die Fragen nicht korrekt beantwortest,\nbeispielsweise indem du mehr als ein Zeichen in deine Antworten schreibst,\nkönntest du kein Weihnachtsgeschenk bekommen :("RESET //15
};

char *NK_SCRIPT[16] = {
    "Du valgte norsk", //0
    YRS"Svar på følgende spørsmål for å få din musikalske julegave!"RESET, //1
    YG"Kjenner du julestemningen?"RESET, //2
    "\n1) Ja\n2) Nei\n", //3
    YG"Føler du noe avslappet eller energisk?"RESET, //4
    "\n1) Avslappet\n2) Energetisk\n", //5
    YG"Liker du Vulfpeck og/eller jazz?"RESET, //6
    "\n1) Ja\n2) Nei\n", //7
    YG"Visste du at Saruman spiller metal?"RESET, //8
    "\n1) Ja\n2) Nei\n", //9
    YG"Foretrekker du jazz eller country?"RESET, //10
    "\n1) Jazz\n2) Country\n", //11
    YG"Liker du metal?"RESET, //12
    "\n1) Ja\n2) Nei\n", //13
    YRS"Pakker inn gave"RESET, //14
    C1"Vær forsiktig, hvis du ikke svarer riktig på spørsmålene,\nfor eksempel ved å legge inn mer enn ett tegn i svarene dine,\nkan det hende du ikke får en julegave :("RESET //15
};


char *NOEL_42[15][41] = {
	{B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1},
	{B1, B1, B1, B1, YC, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, C1, G2, Y1, G1, B1, B1, G2, C1, G1, C1, G1, R1, G2, Y1, B1, B1, B1, B1, B1, CY, B1, B1, B1, B1},
	{B1, B1, B1, B1, G1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, G2, R1, G1, C1, B1, B1, B1, B1, R1, G1, Y1, B1, C1, G1, C1, G2, B1, B1, B1, B1, B1, G1, B1, B1, B1, B1},
	{B1, B1, B1, G2, G1, G2, B1, B1, B1, B1, B1, B1, B1, B1, G2, C1, G1, Y1, B1, B1, B1, B1, B1, G1, C1, B1, B1, G2, Y1, G1, R1, B1, B1, B1, B1, G2, G1, G2, B1, B1, B1},
	{B1, B1, B1, G2, R1, G2, B1, B1, B1, B1, B1, B1, B1, G2, R1, G1, B1, B1, B1, B1, B1, B1, B1, Y1, B1, B1, B1, R1, G1, C1, G2, B1, B1, B1, B1, G2, R1, G2, B1, B1, B1},
	{B1, B1, G2, CY, G1, G1, G2, B1, B1, B1, B1, C1, G2, C1, G1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, G1, C1, G2, C1, B1, B1, B1, G2, YC, G1, G1, G2, B1, B1},
	{B1, B1, G2, G1, G2, R1, G2, B1, B1, B1, Y1, G1, R1, G2, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, G2, C1, G1, Y1, B1, B1, B1, B1, G2, G1, G2, R1, G2, B1, B1},
	{B1, G2, R1, G1, G1, G1, YC, G2, B1, B1, G2, C1, G2, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, G1, Y1, G1, R1, B1, B1, B1, B1, G2, R1, G1, G1, G1, CY, G2, B1},
	{B1, G2, G1, G2, G1, G1, G2, G2, B1, B1, R1, G1, Y1, G1, C1, G1, Y1, G2, C1, G2, Y1, B1, B1, B1, G2, C1, G1, C1, B1, B1, B1, B1, B1, G2, G1, G2, G1, G1, G2, G2, B1},
	{G2, YC, G2, G1, CY, G2, G1, R1, G2, B1, G2, C1, G1, R1, G1, C1, G1, R1, G1, C1, G2, B1, B1, G2, R1, G1, C1, B1, B1, B1, R1, B1, G2, CY, G2, G1, YC, G2, G1, R1, G2},
	{B1, G2, G2, R1, G1, G1, G2, G2, B1, B1, Y1, G2, C1, G1, Y1, G2, C1, G2, Y1, G1, C1, B1, B1, C1, G1, Y1, G2, B1, B1, C1, G1, B1, B1, G2, G2, R1, G1, G1, G2, G2, B1},
	{B1, B1, B1, G2, G2, G2, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, G2, R1, G1, B1, B1, G2, C1, G1, C1, B1, R1, G1, Y1, B1, B1, B1, B1, G2, G2, G2, B1, B1, B1},
	{B1, B1, B1, R2, R2, R2, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, C1, G1, Y1, B1, B1, Y1, G2, R1, G1, Y1, G2, C1, G2, B1, B1, B1, B1, R2, R2, R2, B1, B1, B1},
	{B1, B1, B1, R2, R2, R2, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, G2, Y1, G1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, R2, R2, R2, B1, B1, B1},
	{B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1}
};

char *WELCOME[5][41] = {
    {G1, G2, R1, G2, G1, G2, YC, G2, G1, G2, R1, G2, G1, G2, CY, G2, G1, G2, R1, G2, G1, G2, YC, G2, G1, G2, R1, G2, G1, G2, CY, G2, G1, G2, R1, G2, G1, G2, YC, G2, G1},
    {G2, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, G2},
    {YC, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, 0, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, R1},
    {G2, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, G2},
    {G1, G2, R1, G2, G1, G2, CY, G2, G1, G2, R1, G2, G1, G2, YC, G2, G1, G2, R1, G2, G1, G2, CY, G2, G1, G2, R1, G2, G1, G2, YC, G2, G1, G2, R1, G2, G1, G2, CY, G2, G1}
};

char *WRAPPING[5][41] = {
    {G1, G2, RY, G2, G1, G2, YC, G2, G1, G2, RY, G2, G1, G2, YC, G2, G1, G2, RY, G2, G1, G2, YC, G2, G1, G2, RY, G2, G1, G2, YC, G2, G1, G2, RY, G2, G1, G2, YC, G2, G1},
    {G2, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, G2},
    {YC, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, 0, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, RY},
    {G2, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, G2},
    {G1, G2, RY, G2, G1, G2, YC, G2, G1, G2, RY, G2, G1, G2, YC, G2, G1, G2, RY, G2, G1, G2, YC, G2, G1, G2, RY, G2, G1, G2, YC, G2, G1, G2, RY, G2, G1, G2, YC, G2, G1}
};
