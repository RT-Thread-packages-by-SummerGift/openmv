from building import *
import rtconfig
# get current directory
cwd     = GetCurrentDir()
# The set of source files associated with this SConscript file.

src     = Glob('src/omv/*.c')
src    += Glob('src/omv/img/*.c')
src    += Glob('src/omv/py/*.c')

path    = [cwd + '/']
path   += [cwd + '/port_device']
path   += [cwd + '/src/omv']
path   += [cwd + '/src/omv/img']
path   += [cwd + '/src/omv/py']
path   += [cwd + '/src/omv/boards']
path   += [cwd + '/src/omv/boards/OPENMV3']

LOCAL_CCFLAGS = ' -include "port/mpy_project_cfg.h"'

if rtconfig.CROSS_TOOL == 'gcc':
    LOCAL_CCFLAGS += ' -std=c99'
elif rtconfig.CROSS_TOOL == 'keil':
    LOCAL_CCFLAGS += ' --c99'

group = DefineGroup('Openmv', src, depend = ['PKG_USING_MICROPYTHON'], CPPPATH = path, LOCAL_CCFLAGS = LOCAL_CCFLAGS)

Return('group')
