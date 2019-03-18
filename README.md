# Who Am I

I am [Jacobo Galofre](https://www.linkedin.com/in/jgalofre/), student of the [Bachelor’s Degree in Video Games by UPC at CITM ](https://www.citm.upc.edu/ing/estudis/graus-videojocs/). This content is generated for the second year’s subject Project 2, under supervision of lecturer [Ricard Pillosu](https://es.linkedin.com/in/ricardpillosu).


# Sprite Ordering and Camera Culling

In this website you will find information about how to create Sprite Ordering and Camera Culling effects for 2.5D game. You can also visit the main github repository page where you will be able to find 2 Visual Studio projects, 1 Withe the Camera Culling and Sprite ORdering systems fully implemented and another one with some parts missing to help you practice.

## Sprite Ordering

### What is Sprite Ordering?

When we are talking about rendering sprites for a game, we know that the compiler will have to render the images in a certain order, as it can't render everything at the same time. This causes that if 2 sprites overlaps each other maybe the compiler will render it in the opposite order we want it to work, making the image that is supposed to be at the back be in front of the other one. To solve that we can manually code which of the sprites we want to render first or we can also make use of different automatic Sprite Ordering systems that help us choose which sprite must be on top.

### Why is Sprite Ordering Important?

When making a 2.5D game, for example, we need to create the feeling that the game has depth when it's acutally a 2D game, to do that we have to play with the prespective and the enviroment, so if for example, the player goes behind a tree in the map, we dont want to print the player on top of the tree we will want to print player first and the tree afterwards so the the tree sprite gets to be on top of the player sprite. 
Doing it manually is a really easy option if you have few sprites that you are going to print but when in a game there are dozens of entities that we need to print, it becomes a nearly impossible task to do by hand, and that's where automatic sprite ordering systems help us.

### How do we control the sprite ordering automaticlly in c++?
