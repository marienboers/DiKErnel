# Set executable name
set(LIBNAME DiKErnel.TestUtil)

# Define sources
set(SOURCEFILES
  TestDataHelper.cpp
  TestDataHelper.h
)

# Add executable
add_library(${LIBNAME} ${SOURCEFILES})

# Configure folder structure
set_target_properties(${LIBNAME} PROPERTIES FOLDER Test)
source_group("Sources" FILES ${SOURCEFILES})

# Expose header files
target_include_directories(${LIBNAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})