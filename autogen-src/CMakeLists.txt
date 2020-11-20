# create library
add_library(IEEE2030-5 STATIC 
	ApplianceLoadReduction.cpp,
	DeviceCategoryType.cpp
	DutyCycle.cpp,
	EndDeviceControl.cpp,
	Offset.cpp,
	SetPoint.cpp,
	TargetReduction.cpp)

target_link_libraries(IEEE2030-5 PRIVATE Boost::boost)
target_include_directories(IEEE2030-5 PUBLIC ${Boost_INCLUDE_DIRS})

# add include directories
target_include_directories(IEEE2030-5
                           PUBLIC
                           "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
                           "$<INSTALL_INTERFACE:include>"
)

# install the target and create export-set
install(TARGETS IEEE2030-5
        EXPORT IEEE2030-5Targets
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION bin
        INCLUDES DESTINATION include
)

# install header file
install(
    DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    DESTINATION include
    FILES_MATCHING PATTERN "*.h*")

# generate and install export file
install(EXPORT IEEE2030-5Targets
        FILE IEEE2030-5Targets.cmake
        DESTINATION lib/cmake
)
