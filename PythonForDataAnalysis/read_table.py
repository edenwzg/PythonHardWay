import pandas as pd

user_path = './movielens/users.dat'
rating_path = './movielens/ratings.dat'
movie_path = './movielens/movies.dat'

unames = ['user_id', 'gender', 'age', 'occupation', 'zip']
users = pd.read_table(user_path, sep='::', header=None, names=unames)

rnames = ['user_id', 'movie_id', 'rating', 'timestamp']
ratings = pd.read_table(rating_path, sep='::', header=None, names=rnames)

mnames = ['movie_id', 'title', 'genres']
movies = pd.read_table(movie_path, sep='::', header=None, names=mnames)