Import('env')
from os.path import join, realpath

global_env = DefaultEnvironment()

CPPPATH=[
        realpath("include"),
        ]
global_env.Append(CPPPATH=CPPPATH)