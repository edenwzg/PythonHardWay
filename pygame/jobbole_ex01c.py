
# import pygame module
import pygame
# introduce all constants in pygame
from pygame.locals import *

# set position and velocity for rectangle
pos_start = 100, 100
pos_end = 500, 400

screen_size = 600, 500

color = 255, 255, 0  # yellow
screen_color = 0, 0, 200  # blue
width = 8  # solid fill

# initlize game
pygame.init()
screen = pygame.display.set_mode(screen_size)
pygame.display.set_caption("EdenTest")

# game loop
while True:

    for event in pygame.event.get():
        # Capture event type is KEYDOWN or QUIT event
        if event.type in (QUIT, KEYDOWN):
            # quit pygame
            pygame.quit()

    # fill the screen color
    screen.fill(screen_color)
    
    # draw line
    pygame.draw.line(screen, color, pos_start, pos_end, width)

    # update display
    pygame.display.update()
    