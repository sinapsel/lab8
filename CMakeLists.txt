cmake_minimum_required(VERSION 3.15)
project(Prog VERSION 1.0.0 LANGUAGES C)

set (SRCDIR src)
set(SRCS
    ${SRCDIR}/main.c
    ${SRCDIR}/point.c
    ${SRCDIR}/shape.c
    ${SRCDIR}/circle.c
    ${SRCDIR}/rect.c
)


add_executable(prog ${SRCS})
# target_include_directories(prog PRIVATE include)
target_compile_features(prog PRIVATE c_std_23)