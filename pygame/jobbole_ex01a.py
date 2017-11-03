# import pygame
import pygame
# introduce all constants in pygame
from pygame.locals import *
# initlize pygame for hardware
pygame.init()


# creat a windows
screen = pygame.display.set_mode((600, 500))
# set font
my_font = pygame.font.Font(None, 60)

# variable
white = (255, 255, 255)
blue = (0, 0, 200)

# creat a text image object
text_image = my_font.render("Hello pygame", True, white)

# game loop
while True:
    
    for event in pygame.event.get():
        if event.type in (QUIT, KEYDOWN):
            sys.exit()
    # fill the screen as blue       
    screen.fill(blue)
    # draw a surface
    screen.blit(text_image, (100, 100))
    # display update
    pygame.display.update()