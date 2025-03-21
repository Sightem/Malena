
#include "Typer.h"
namespace ml
{
    Typer::Typer(const sf::Font &font) : Shape<sf::Text>(font)
    {
       registerEvents();
    }
}

void ml::Typer::registerEvents()
{
    onTextEntered([this](Event event)
       {
           if(checkState(FOCUSED))
           {
               std::string text = getString();
               char c = event->getIf<sf::Event::TextEntered>()->unicode;

               if(c == '\b')
                   text.pop_back();

               if(c >= ' ' ||  c == '\n' || c == '\t')
                   text.push_back(c);

               setString(text);
           }
       });
}
