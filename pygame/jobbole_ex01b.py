
# import pygame module
import pygame
# introduce all constants in pygame
from pygame.locals import *

# set position and velocity for rectangle
pos = {'x':300, 'y':250}
vel = {'x':2 ,'y':1}
screen_size = {'x':600, 'y':500}
box_size = {'x':100, 'y':100}

# initlize game
pygame.init()
screen = pygame.display.set_mode((screen_size['x'], screen_size['y']))
pygame.display.set_caption("Drawing")
# game loop
while True:

	for event in pygame.event.get():
		# Capture event type is KEYDOWN or QUIT event
		if event.type in (QUIT, KEYDOWN):
			# quit pygame
			pygame.quit()

	# fill the screen color
	screen.fill((0, 0, 200))

	# update the position of the rectangle
	pos['x'] += vel['x']
	pos['y'] += vel['y']

	# The rectangle bounces off the window boundary
	if pos['x'] > screen_size['x'] - box_size['x']  or pos['x'] == 0:
		vel['x'] = -vel['x']
	if pos['y'] > screen_size['y'] - box_size['y'] or pos['y'] == 0:
		vel['y'] = -vel['y']

	# set the color of the rectangle
	rect_color = 255, 255, 0
	# set the border of the rectangle
	rect_width = 0  # solid fill
	# set position(First two parameters) and size(last two parameters) of the rectangle
	rect_position = pos['x'], pos['y'], box_size['x'], box_size['y']
	# draw the rectangle
	pygame.draw.rect(screen, rect_color, rect_position, rect_width)

	# update display
	pygame.display.update()