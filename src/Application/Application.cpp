
#include <Malena/Application/Application.h>

namespace ml
{
	Application::Application(const sf::VideoMode &videoMode, const std::string &title, UIController &appLogic,
							 sf::RenderWindow &window) : UIManager(videoMode, title, appLogic, window)
	{
	}
} // namespace ml
