#include <SFML/Window.hpp>


// our application will have 3 main parts:
// setup - window and intial objects
// game loop - the main thing
// cleanup

// sub parts of game loop :
//it involves input from function outputs
// render the output of graphics


int main()
{
    sf::Window window;
    window.create(sf::VideoMode(800, 600), "My window");
    window.setVerticalSyncEnabled(true); // call it once, after creating the window

    // window.setFramerateLimit(60); // call it once, after creating the window
    // used to set the frame rate to a fixed rate


    //let's setup texture and sprites

    sf::Texture texture;

    // filepath is background for our map

if (!texture.loadFromFile("filepath"))
{
    // error message in case it doesnt load

}

sf::Sprite backgroupsprite(texture);


    swhile (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}