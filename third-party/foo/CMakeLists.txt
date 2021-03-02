add_library(foolib STATIC 
            src/bar/src/foobar.c
            src/zap/src/foozap.c)
target_include_directories(foolib PUBLIC 
                           src/bar/inc
                           src/zap/inc)
target_include_directories(foolib PRIVATE 
                           ${CMAKE_SOURCE_DIR}/${FOO_CFG_FILE_PATH})
target_compile_definitions(foolib PUBLIC FOO_COMPILE_OPT=2)
