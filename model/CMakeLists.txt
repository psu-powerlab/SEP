set(COMPONENT_NAME Model)
add_library(${COMPONENT_NAME} STATIC
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
    version_information.cpp
)

# Create ALIAS targets.
add_library( ${PROJECT_NAME}::${COMPONENT_NAME} ALIAS ${COMPONENT_NAME} )

target_include_directories(
    ${COMPONENT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

# install the target and create export-set
install(
    TARGETS ${COMPONENT_NAME}
    EXPORT ${COMPONENT_NAME}Targets
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)

install(
    EXPORT ${COMPONENT_NAME}Targets
    FILE ${COMPONENT_NAME}Targets.cmake
    NAMESPACE ${PROJECT_NAME}::
    DESTINATION lib/cmake
)
