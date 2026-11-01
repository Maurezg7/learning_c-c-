#include "description.c"

int main(){
    Lenguaje html;
    html.Nombre = "HTML";
    html.year = 1993;

    Lenguaje css;
    css.Nombre = "CSS";
    css.year = 1996;

    description(html);
    description(css);

    return 0;
}
