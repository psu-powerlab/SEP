# create library
add_library(IEEE2030-5 STATIC 
        active_power.cpp
        date_time_interval.cpp
        der_control.cpp
        der_control_base.cpp
        end_device_control.cpp
        event.cpp
        event_status.cpp
        fixed_var.cpp
        flow_reservation_request.cpp
        flow_reservation_response.cpp
        freq_droop_type.cpp
        offset.cpp
        per_cent.cpp
        power_factor_with_excitation.cpp
        randomizable_event.cpp
        reactive_power.cpp
        request_status.cpp
        resource.cpp
        respondable_resource.cpp
        respondable_subscribable_identified_object.cpp
        set_point.cpp
        signed_per_cent.cpp
        signed_real_energy.cpp
        subscribable_resource.cpp
        target_reduction.cpp
        version_information.cpp)

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
