cmake_minimum_required(VERSION 2.8.9)

PROJECT(throw-catch-sigsegv CXX)
ADD_COMPILE_OPTIONS(-Werror -fexceptions)
# --std=gnu++03

FILE(GLOB testSources LIST_DIRECTORIES false ${PROJECT_SOURCE_DIR}/*.cpp)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})

ADD_EXECUTABLE(throw-catch-sigsegv ${testSources})
#TARGET_LINK_LIBRARIES(throw-catch-sigsegv ${uciLib} ${ubusLib} ${uboxLib} ${blobmsg_jsonLib})

INSTALL(TARGETS throw-catch-sigsegv DESTINATION bin)
