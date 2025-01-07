/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 61b9d7c4865da96ac967a58f08937db3999e6548 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_version, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_gearman_bugreport arginfo_gearman_version

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_verbose_name, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, verbose, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_gearman_client_create, 0, 0, GearmanClient, MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_gearman_worker_create, 0, 0, GearmanWorker, MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_client_return_code, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gearman_client_error, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
ZEND_END_ARG_INFO()

#define arginfo_gearman_client_get_errno arginfo_gearman_client_return_code

#define arginfo_gearman_client_options arginfo_gearman_client_return_code

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_client_set_options, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_gearman_client_add_options arginfo_gearman_client_set_options

#define arginfo_gearman_client_remove_options arginfo_gearman_client_set_options

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_client_timeout, 0, 1, IS_LONG, 1)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_client_set_timeout, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_client_add_server, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, host, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, port, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, setupExceptionHandler, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_client_add_servers, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, servers, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, setupExceptionHandler, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_client_wait, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_client_do_normal, 0, 3, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
	ZEND_ARG_TYPE_INFO(0, function, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, workload, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, unique, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_gearman_client_do_high arginfo_gearman_client_do_normal

#define arginfo_gearman_client_do_low arginfo_gearman_client_do_normal

#define arginfo_gearman_client_do_background arginfo_gearman_client_do_normal

#define arginfo_gearman_client_do_high_background arginfo_gearman_client_do_normal

#define arginfo_gearman_client_do_low_background arginfo_gearman_client_do_normal

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_client_do_job_handle, 0, 1, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_client_do_status, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_client_job_status, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
	ZEND_ARG_TYPE_INFO(0, job_handle, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_client_job_status_by_unique_key, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
	ZEND_ARG_TYPE_INFO(0, unique_key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_client_ping, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
	ZEND_ARG_TYPE_INFO(0, workload, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_gearman_client_add_task, 0, 3, GearmanTask, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
	ZEND_ARG_TYPE_INFO(0, function_name, IS_STRING, 0)
	ZEND_ARG_TYPE_MASK(0, workload, MAY_BE_STRING|MAY_BE_LONG|MAY_BE_DOUBLE, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, context, IS_MIXED, 0, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, unique_key, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_gearman_client_add_task_high arginfo_gearman_client_add_task

#define arginfo_gearman_client_add_task_low arginfo_gearman_client_add_task

#define arginfo_gearman_client_add_task_background arginfo_gearman_client_add_task

#define arginfo_gearman_client_add_task_high_background arginfo_gearman_client_add_task

#define arginfo_gearman_client_add_task_low_background arginfo_gearman_client_add_task

#define arginfo_gearman_client_run_tasks arginfo_gearman_client_wait

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_gearman_client_add_task_status, 0, 2, GearmanTask, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
	ZEND_ARG_TYPE_INFO(0, job_handle, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, context, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_client_set_workload_callback, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
	ZEND_ARG_TYPE_INFO(0, function, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_gearman_client_set_created_callback arginfo_gearman_client_set_workload_callback

#define arginfo_gearman_client_set_data_callback arginfo_gearman_client_set_workload_callback

#define arginfo_gearman_client_set_warning_callback arginfo_gearman_client_set_workload_callback

#define arginfo_gearman_client_set_status_callback arginfo_gearman_client_set_workload_callback

#define arginfo_gearman_client_set_complete_callback arginfo_gearman_client_set_workload_callback

#define arginfo_gearman_client_set_exception_callback arginfo_gearman_client_set_workload_callback

#define arginfo_gearman_client_set_fail_callback arginfo_gearman_client_set_workload_callback

#define arginfo_gearman_client_clear_callbacks arginfo_gearman_client_wait

#define arginfo_gearman_client_context arginfo_gearman_client_do_job_handle

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_client_set_context, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanClient, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_gearman_client_enable_exception_handler arginfo_gearman_client_wait

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_job_return_code, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanJob, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_job_set_return, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanJob, 0)
	ZEND_ARG_TYPE_INFO(0, gearman_return_t, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_job_send_data, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanJob, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_job_send_warning, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanJob, 0)
	ZEND_ARG_TYPE_INFO(0, warning, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_job_send_status, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanJob, 0)
	ZEND_ARG_TYPE_INFO(0, numerator, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, denominator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_job_send_complete, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanJob, 0)
	ZEND_ARG_TYPE_INFO(0, result, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_job_send_exception, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanJob, 0)
	ZEND_ARG_TYPE_INFO(0, exception, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_job_send_fail, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanJob, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gearman_job_handle, 0, 1, MAY_BE_FALSE|MAY_BE_STRING)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanJob, 0)
ZEND_END_ARG_INFO()

#define arginfo_gearman_job_function_name arginfo_gearman_job_handle

#define arginfo_gearman_job_unique arginfo_gearman_job_handle

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_job_workload, 0, 1, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanJob, 0)
ZEND_END_ARG_INFO()

#define arginfo_gearman_job_workload_size arginfo_gearman_job_return_code

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_task_return_code, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanTask, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gearman_task_function_name, 0, 1, MAY_BE_FALSE|MAY_BE_STRING)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanTask, 0)
ZEND_END_ARG_INFO()

#define arginfo_gearman_task_unique arginfo_gearman_task_function_name

#define arginfo_gearman_task_job_handle arginfo_gearman_task_function_name

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_task_is_known, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanTask, 0)
ZEND_END_ARG_INFO()

#define arginfo_gearman_task_is_running arginfo_gearman_task_is_known

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gearman_task_numerator, 0, 1, MAY_BE_FALSE|MAY_BE_LONG)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanTask, 0)
ZEND_END_ARG_INFO()

#define arginfo_gearman_task_denominator arginfo_gearman_task_numerator

#define arginfo_gearman_task_data arginfo_gearman_task_function_name

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gearman_task_data_size, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanTask, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gearman_task_send_workload, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanTask, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gearman_task_recv_data, 0, 2, MAY_BE_FALSE|MAY_BE_ARRAY)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanTask, 0)
	ZEND_ARG_TYPE_INFO(0, data_len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_worker_return_code, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanWorker, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gearman_worker_error, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanWorker, 0)
ZEND_END_ARG_INFO()

#define arginfo_gearman_worker_errno arginfo_gearman_worker_return_code

#define arginfo_gearman_worker_options arginfo_gearman_worker_return_code

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_worker_set_options, 0, 2, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanWorker, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_gearman_worker_add_options arginfo_gearman_worker_set_options

#define arginfo_gearman_worker_remove_options arginfo_gearman_worker_set_options

#define arginfo_gearman_worker_timeout arginfo_gearman_worker_return_code

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_worker_set_timeout, 0, 2, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanWorker, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_worker_set_id, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanWorker, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_worker_add_server, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanWorker, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, host, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, port, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, setupExceptionHandler, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_worker_add_servers, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanWorker, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, servers, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, setupExceptionHandler, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_worker_wait, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanWorker, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_worker_register, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanWorker, 0)
	ZEND_ARG_TYPE_INFO(0, function_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timeout, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_worker_unregister, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanWorker, 0)
	ZEND_ARG_TYPE_INFO(0, function_name, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_gearman_worker_unregister_all arginfo_gearman_worker_wait

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_gearman_worker_grab_job, 0, 1, GearmanWorker, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanWorker, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_worker_add_function, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanWorker, 0)
	ZEND_ARG_TYPE_INFO(0, function_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, function, IS_CALLABLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, context, IS_MIXED, 0, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timeout, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_gearman_worker_work arginfo_gearman_worker_wait

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gearman_worker_ping, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, obj, GearmanWorker, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_gearman_worker_enable_exception_handler arginfo_gearman_worker_wait

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_GearmanClient___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanClient___destruct arginfo_class_GearmanClient___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanClient_returnCode, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_class_GearmanClient_error, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanClient_getErrno arginfo_class_GearmanClient_returnCode

#define arginfo_class_GearmanClient_options arginfo_class_GearmanClient_returnCode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanClient_setOptions, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanClient_addOptions arginfo_class_GearmanClient_setOptions

#define arginfo_class_GearmanClient_removeOptions arginfo_class_GearmanClient_setOptions

#define arginfo_class_GearmanClient_timeout arginfo_class_GearmanClient_returnCode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanClient_setTimeout, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanClient_addServer, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, host, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, port, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, setupExceptionHandler, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanClient_addServers, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, servers, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, setupExceptionHandler, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanClient_wait, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanClient_doNormal, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, function, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, workload, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, unique, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanClient_doHigh arginfo_class_GearmanClient_doNormal

#define arginfo_class_GearmanClient_doLow arginfo_class_GearmanClient_doNormal

#define arginfo_class_GearmanClient_doBackground arginfo_class_GearmanClient_doNormal

#define arginfo_class_GearmanClient_doHighBackground arginfo_class_GearmanClient_doNormal

#define arginfo_class_GearmanClient_doLowBackground arginfo_class_GearmanClient_doNormal

#define arginfo_class_GearmanClient_doJobHandle arginfo_gearman_version

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanClient_doStatus, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanClient_jobStatus, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, job_handle, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanClient_jobStatusByUniqueKey, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, unique_key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanClient_ping, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, workload, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_GearmanClient_addTask, 0, 2, GearmanTask, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, function_name, IS_STRING, 0)
	ZEND_ARG_TYPE_MASK(0, workload, MAY_BE_STRING|MAY_BE_LONG|MAY_BE_DOUBLE, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, context, IS_MIXED, 0, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, unique_key, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanClient_addTaskHigh arginfo_class_GearmanClient_addTask

#define arginfo_class_GearmanClient_addTaskLow arginfo_class_GearmanClient_addTask

#define arginfo_class_GearmanClient_addTaskBackground arginfo_class_GearmanClient_addTask

#define arginfo_class_GearmanClient_addTaskHighBackground arginfo_class_GearmanClient_addTask

#define arginfo_class_GearmanClient_addTaskLowBackground arginfo_class_GearmanClient_addTask

#define arginfo_class_GearmanClient_runTasks arginfo_class_GearmanClient_wait

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_GearmanClient_addTaskStatus, 0, 1, GearmanTask, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, job_handle, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, context, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanClient_setWorkloadCallback, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, function, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanClient_setCreatedCallback arginfo_class_GearmanClient_setWorkloadCallback

#define arginfo_class_GearmanClient_setDataCallback arginfo_class_GearmanClient_setWorkloadCallback

#define arginfo_class_GearmanClient_setWarningCallback arginfo_class_GearmanClient_setWorkloadCallback

#define arginfo_class_GearmanClient_setStatusCallback arginfo_class_GearmanClient_setWorkloadCallback

#define arginfo_class_GearmanClient_setCompleteCallback arginfo_class_GearmanClient_setWorkloadCallback

#define arginfo_class_GearmanClient_setExceptionCallback arginfo_class_GearmanClient_setWorkloadCallback

#define arginfo_class_GearmanClient_setFailCallback arginfo_class_GearmanClient_setWorkloadCallback

#define arginfo_class_GearmanClient_clearCallbacks arginfo_class_GearmanClient_wait

#define arginfo_class_GearmanClient_context arginfo_gearman_version

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanClient_setContext, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanClient_enableExceptionHandler arginfo_class_GearmanClient_wait

#define arginfo_class_GearmanJob___destruct arginfo_class_GearmanClient___construct

#define arginfo_class_GearmanJob_returnCode arginfo_class_GearmanClient_returnCode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanJob_setReturn, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, gearman_return_t, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanJob_sendData arginfo_class_GearmanClient_setContext

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanJob_sendWarning, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, warning, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanJob_sendStatus, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, numerator, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, denominator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanJob_sendComplete, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, result, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanJob_sendException, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, exception, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanJob_sendFail arginfo_class_GearmanClient_wait

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_class_GearmanJob_handle, 0, 0, MAY_BE_FALSE|MAY_BE_STRING)
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanJob_functionName arginfo_class_GearmanJob_handle

#define arginfo_class_GearmanJob_unique arginfo_class_GearmanJob_handle

#define arginfo_class_GearmanJob_workload arginfo_gearman_version

#define arginfo_class_GearmanJob_workloadSize arginfo_class_GearmanClient_returnCode

#define arginfo_class_GearmanTask___construct arginfo_class_GearmanClient___construct

#define arginfo_class_GearmanTask_returnCode arginfo_class_GearmanClient_returnCode

#define arginfo_class_GearmanTask_functionName arginfo_class_GearmanJob_handle

#define arginfo_class_GearmanTask_unique arginfo_class_GearmanJob_handle

#define arginfo_class_GearmanTask_jobHandle arginfo_class_GearmanJob_handle

#define arginfo_class_GearmanTask_isKnown arginfo_class_GearmanClient_wait

#define arginfo_class_GearmanTask_isRunning arginfo_class_GearmanClient_wait

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_class_GearmanTask_taskNumerator, 0, 0, MAY_BE_FALSE|MAY_BE_LONG)
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanTask_taskDenominator arginfo_class_GearmanTask_taskNumerator

#define arginfo_class_GearmanTask_data arginfo_class_GearmanJob_handle

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_class_GearmanTask_dataSize, 0, 0, MAY_BE_LONG|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_class_GearmanTask_sendWorkload, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_class_GearmanTask_recvData, 0, 1, MAY_BE_FALSE|MAY_BE_ARRAY)
	ZEND_ARG_TYPE_INFO(0, data_len, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanWorker___construct arginfo_class_GearmanClient___construct

#define arginfo_class_GearmanWorker___destruct arginfo_class_GearmanClient___construct

#define arginfo_class_GearmanWorker_returnCode arginfo_class_GearmanClient_returnCode

#define arginfo_class_GearmanWorker_error arginfo_class_GearmanClient_error

#define arginfo_class_GearmanWorker_getErrno arginfo_class_GearmanClient_returnCode

#define arginfo_class_GearmanWorker_options arginfo_class_GearmanClient_returnCode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanWorker_setOptions, 0, 1, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanWorker_addOptions arginfo_class_GearmanWorker_setOptions

#define arginfo_class_GearmanWorker_removeOptions arginfo_class_GearmanWorker_setOptions

#define arginfo_class_GearmanWorker_timeout arginfo_class_GearmanClient_returnCode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanWorker_setTimeout, 0, 1, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanWorker_setId, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanWorker_addServer arginfo_class_GearmanClient_addServer

#define arginfo_class_GearmanWorker_addServers arginfo_class_GearmanClient_addServers

#define arginfo_class_GearmanWorker_wait arginfo_class_GearmanClient_wait

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanWorker_register, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, function_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timeout, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanWorker_unregister, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, function_name, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanWorker_unregisterAll arginfo_class_GearmanClient_wait

#define arginfo_class_GearmanWorker_grabJob arginfo_gearman_worker_create

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GearmanWorker_addFunction, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, function_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, function, IS_CALLABLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, context, IS_MIXED, 0, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timeout, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_class_GearmanWorker_work arginfo_class_GearmanClient_wait

#define arginfo_class_GearmanWorker_ping arginfo_class_GearmanClient_setContext

#define arginfo_class_GearmanWorker_enableExceptionHandler arginfo_class_GearmanClient_wait


ZEND_FUNCTION(gearman_version);
ZEND_FUNCTION(gearman_bugreport);
ZEND_FUNCTION(gearman_verbose_name);
ZEND_FUNCTION(gearman_client_create);
ZEND_FUNCTION(gearman_worker_create);
ZEND_FUNCTION(gearman_client_return_code);
ZEND_FUNCTION(gearman_client_error);
ZEND_FUNCTION(gearman_client_get_errno);
ZEND_FUNCTION(gearman_client_options);
ZEND_FUNCTION(gearman_client_set_options);
ZEND_FUNCTION(gearman_client_add_options);
ZEND_FUNCTION(gearman_client_remove_options);
ZEND_FUNCTION(gearman_client_timeout);
ZEND_FUNCTION(gearman_client_set_timeout);
ZEND_FUNCTION(gearman_client_add_server);
ZEND_FUNCTION(gearman_client_add_servers);
ZEND_FUNCTION(gearman_client_wait);
ZEND_FUNCTION(gearman_client_do_normal);
ZEND_FUNCTION(gearman_client_do_high);
ZEND_FUNCTION(gearman_client_do_low);
ZEND_FUNCTION(gearman_client_do_background);
ZEND_FUNCTION(gearman_client_do_high_background);
ZEND_FUNCTION(gearman_client_do_low_background);
ZEND_FUNCTION(gearman_client_do_job_handle);
ZEND_FUNCTION(gearman_client_do_status);
ZEND_FUNCTION(gearman_client_job_status);
ZEND_FUNCTION(gearman_client_job_status_by_unique_key);
ZEND_FUNCTION(gearman_client_ping);
ZEND_FUNCTION(gearman_client_add_task);
ZEND_FUNCTION(gearman_client_add_task_high);
ZEND_FUNCTION(gearman_client_add_task_low);
ZEND_FUNCTION(gearman_client_add_task_background);
ZEND_FUNCTION(gearman_client_add_task_high_background);
ZEND_FUNCTION(gearman_client_add_task_low_background);
ZEND_FUNCTION(gearman_client_run_tasks);
ZEND_FUNCTION(gearman_client_add_task_status);
ZEND_FUNCTION(gearman_client_set_workload_callback);
ZEND_FUNCTION(gearman_client_set_created_callback);
ZEND_FUNCTION(gearman_client_set_data_callback);
ZEND_FUNCTION(gearman_client_set_warning_callback);
ZEND_FUNCTION(gearman_client_set_status_callback);
ZEND_FUNCTION(gearman_client_set_complete_callback);
ZEND_FUNCTION(gearman_client_set_exception_callback);
ZEND_FUNCTION(gearman_client_set_fail_callback);
ZEND_FUNCTION(gearman_client_clear_callbacks);
ZEND_FUNCTION(gearman_client_context);
ZEND_FUNCTION(gearman_client_set_context);
ZEND_FUNCTION(gearman_client_enable_exception_handler);
ZEND_FUNCTION(gearman_job_return_code);
ZEND_FUNCTION(gearman_job_set_return);
ZEND_FUNCTION(gearman_job_send_data);
ZEND_FUNCTION(gearman_job_send_warning);
ZEND_FUNCTION(gearman_job_send_status);
ZEND_FUNCTION(gearman_job_send_complete);
ZEND_FUNCTION(gearman_job_send_exception);
ZEND_FUNCTION(gearman_job_send_fail);
ZEND_FUNCTION(gearman_job_handle);
ZEND_FUNCTION(gearman_job_function_name);
ZEND_FUNCTION(gearman_job_unique);
ZEND_FUNCTION(gearman_job_workload);
ZEND_FUNCTION(gearman_job_workload_size);
ZEND_FUNCTION(gearman_task_return_code);
ZEND_FUNCTION(gearman_task_function_name);
ZEND_FUNCTION(gearman_task_unique);
ZEND_FUNCTION(gearman_task_job_handle);
ZEND_FUNCTION(gearman_task_is_known);
ZEND_FUNCTION(gearman_task_is_running);
ZEND_FUNCTION(gearman_task_numerator);
ZEND_FUNCTION(gearman_task_denominator);
ZEND_FUNCTION(gearman_task_data);
ZEND_FUNCTION(gearman_task_data_size);
ZEND_FUNCTION(gearman_task_send_workload);
ZEND_FUNCTION(gearman_task_recv_data);
ZEND_FUNCTION(gearman_worker_return_code);
ZEND_FUNCTION(gearman_worker_error);
ZEND_FUNCTION(gearman_worker_errno);
ZEND_FUNCTION(gearman_worker_options);
ZEND_FUNCTION(gearman_worker_set_options);
ZEND_FUNCTION(gearman_worker_add_options);
ZEND_FUNCTION(gearman_worker_remove_options);
ZEND_FUNCTION(gearman_worker_timeout);
ZEND_FUNCTION(gearman_worker_set_timeout);
ZEND_FUNCTION(gearman_worker_set_id);
ZEND_FUNCTION(gearman_worker_add_server);
ZEND_FUNCTION(gearman_worker_add_servers);
ZEND_FUNCTION(gearman_worker_wait);
ZEND_FUNCTION(gearman_worker_register);
ZEND_FUNCTION(gearman_worker_unregister);
ZEND_FUNCTION(gearman_worker_unregister_all);
ZEND_FUNCTION(gearman_worker_grab_job);
ZEND_FUNCTION(gearman_worker_add_function);
ZEND_FUNCTION(gearman_worker_work);
ZEND_FUNCTION(gearman_worker_ping);
ZEND_FUNCTION(gearman_worker_enable_exception_handler);
ZEND_METHOD(GearmanClient, __construct);
ZEND_METHOD(GearmanClient, __destruct);
ZEND_METHOD(GearmanJob, __destruct);
ZEND_METHOD(GearmanTask, __construct);
ZEND_METHOD(GearmanWorker, __construct);
ZEND_METHOD(GearmanWorker, __destruct);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(gearman_version, arginfo_gearman_version)
	ZEND_FE(gearman_bugreport, arginfo_gearman_bugreport)
	ZEND_FE(gearman_verbose_name, arginfo_gearman_verbose_name)
	ZEND_FE(gearman_client_create, arginfo_gearman_client_create)
	ZEND_FE(gearman_worker_create, arginfo_gearman_worker_create)
	ZEND_FE(gearman_client_return_code, arginfo_gearman_client_return_code)
	ZEND_FE(gearman_client_error, arginfo_gearman_client_error)
	ZEND_FE(gearman_client_get_errno, arginfo_gearman_client_get_errno)
	ZEND_FE(gearman_client_options, arginfo_gearman_client_options)
	ZEND_FE(gearman_client_set_options, arginfo_gearman_client_set_options)
	ZEND_FE(gearman_client_add_options, arginfo_gearman_client_add_options)
	ZEND_FE(gearman_client_remove_options, arginfo_gearman_client_remove_options)
	ZEND_FE(gearman_client_timeout, arginfo_gearman_client_timeout)
	ZEND_FE(gearman_client_set_timeout, arginfo_gearman_client_set_timeout)
	ZEND_FE(gearman_client_add_server, arginfo_gearman_client_add_server)
	ZEND_FE(gearman_client_add_servers, arginfo_gearman_client_add_servers)
	ZEND_FE(gearman_client_wait, arginfo_gearman_client_wait)
	ZEND_FE(gearman_client_do_normal, arginfo_gearman_client_do_normal)
	ZEND_FE(gearman_client_do_high, arginfo_gearman_client_do_high)
	ZEND_FE(gearman_client_do_low, arginfo_gearman_client_do_low)
	ZEND_FE(gearman_client_do_background, arginfo_gearman_client_do_background)
	ZEND_FE(gearman_client_do_high_background, arginfo_gearman_client_do_high_background)
	ZEND_FE(gearman_client_do_low_background, arginfo_gearman_client_do_low_background)
	ZEND_FE(gearman_client_do_job_handle, arginfo_gearman_client_do_job_handle)
	ZEND_FE(gearman_client_do_status, arginfo_gearman_client_do_status)
	ZEND_FE(gearman_client_job_status, arginfo_gearman_client_job_status)
	ZEND_FE(gearman_client_job_status_by_unique_key, arginfo_gearman_client_job_status_by_unique_key)
	ZEND_FE(gearman_client_ping, arginfo_gearman_client_ping)
	ZEND_FE(gearman_client_add_task, arginfo_gearman_client_add_task)
	ZEND_FE(gearman_client_add_task_high, arginfo_gearman_client_add_task_high)
	ZEND_FE(gearman_client_add_task_low, arginfo_gearman_client_add_task_low)
	ZEND_FE(gearman_client_add_task_background, arginfo_gearman_client_add_task_background)
	ZEND_FE(gearman_client_add_task_high_background, arginfo_gearman_client_add_task_high_background)
	ZEND_FE(gearman_client_add_task_low_background, arginfo_gearman_client_add_task_low_background)
	ZEND_FE(gearman_client_run_tasks, arginfo_gearman_client_run_tasks)
	ZEND_FE(gearman_client_add_task_status, arginfo_gearman_client_add_task_status)
	ZEND_FE(gearman_client_set_workload_callback, arginfo_gearman_client_set_workload_callback)
	ZEND_FE(gearman_client_set_created_callback, arginfo_gearman_client_set_created_callback)
	ZEND_FE(gearman_client_set_data_callback, arginfo_gearman_client_set_data_callback)
	ZEND_FE(gearman_client_set_warning_callback, arginfo_gearman_client_set_warning_callback)
	ZEND_FE(gearman_client_set_status_callback, arginfo_gearman_client_set_status_callback)
	ZEND_FE(gearman_client_set_complete_callback, arginfo_gearman_client_set_complete_callback)
	ZEND_FE(gearman_client_set_exception_callback, arginfo_gearman_client_set_exception_callback)
	ZEND_FE(gearman_client_set_fail_callback, arginfo_gearman_client_set_fail_callback)
	ZEND_FE(gearman_client_clear_callbacks, arginfo_gearman_client_clear_callbacks)
	ZEND_FE(gearman_client_context, arginfo_gearman_client_context)
	ZEND_FE(gearman_client_set_context, arginfo_gearman_client_set_context)
	ZEND_FE(gearman_client_enable_exception_handler, arginfo_gearman_client_enable_exception_handler)
	ZEND_FE(gearman_job_return_code, arginfo_gearman_job_return_code)
	ZEND_FE(gearman_job_set_return, arginfo_gearman_job_set_return)
	ZEND_FE(gearman_job_send_data, arginfo_gearman_job_send_data)
	ZEND_FE(gearman_job_send_warning, arginfo_gearman_job_send_warning)
	ZEND_FE(gearman_job_send_status, arginfo_gearman_job_send_status)
	ZEND_FE(gearman_job_send_complete, arginfo_gearman_job_send_complete)
	ZEND_FE(gearman_job_send_exception, arginfo_gearman_job_send_exception)
	ZEND_FE(gearman_job_send_fail, arginfo_gearman_job_send_fail)
	ZEND_FE(gearman_job_handle, arginfo_gearman_job_handle)
	ZEND_FE(gearman_job_function_name, arginfo_gearman_job_function_name)
	ZEND_FE(gearman_job_unique, arginfo_gearman_job_unique)
	ZEND_FE(gearman_job_workload, arginfo_gearman_job_workload)
	ZEND_FE(gearman_job_workload_size, arginfo_gearman_job_workload_size)
	ZEND_FE(gearman_task_return_code, arginfo_gearman_task_return_code)
	ZEND_FE(gearman_task_function_name, arginfo_gearman_task_function_name)
	ZEND_FE(gearman_task_unique, arginfo_gearman_task_unique)
	ZEND_FE(gearman_task_job_handle, arginfo_gearman_task_job_handle)
	ZEND_FE(gearman_task_is_known, arginfo_gearman_task_is_known)
	ZEND_FE(gearman_task_is_running, arginfo_gearman_task_is_running)
	ZEND_FE(gearman_task_numerator, arginfo_gearman_task_numerator)
	ZEND_FE(gearman_task_denominator, arginfo_gearman_task_denominator)
	ZEND_FE(gearman_task_data, arginfo_gearman_task_data)
	ZEND_FE(gearman_task_data_size, arginfo_gearman_task_data_size)
	ZEND_FE(gearman_task_send_workload, arginfo_gearman_task_send_workload)
	ZEND_FE(gearman_task_recv_data, arginfo_gearman_task_recv_data)
	ZEND_FE(gearman_worker_return_code, arginfo_gearman_worker_return_code)
	ZEND_FE(gearman_worker_error, arginfo_gearman_worker_error)
	ZEND_FE(gearman_worker_errno, arginfo_gearman_worker_errno)
	ZEND_FE(gearman_worker_options, arginfo_gearman_worker_options)
	ZEND_FE(gearman_worker_set_options, arginfo_gearman_worker_set_options)
	ZEND_FE(gearman_worker_add_options, arginfo_gearman_worker_add_options)
	ZEND_FE(gearman_worker_remove_options, arginfo_gearman_worker_remove_options)
	ZEND_FE(gearman_worker_timeout, arginfo_gearman_worker_timeout)
	ZEND_FE(gearman_worker_set_timeout, arginfo_gearman_worker_set_timeout)
	ZEND_FE(gearman_worker_set_id, arginfo_gearman_worker_set_id)
	ZEND_FE(gearman_worker_add_server, arginfo_gearman_worker_add_server)
	ZEND_FE(gearman_worker_add_servers, arginfo_gearman_worker_add_servers)
	ZEND_FE(gearman_worker_wait, arginfo_gearman_worker_wait)
	ZEND_FE(gearman_worker_register, arginfo_gearman_worker_register)
	ZEND_FE(gearman_worker_unregister, arginfo_gearman_worker_unregister)
	ZEND_FE(gearman_worker_unregister_all, arginfo_gearman_worker_unregister_all)
	ZEND_FE(gearman_worker_grab_job, arginfo_gearman_worker_grab_job)
	ZEND_FE(gearman_worker_add_function, arginfo_gearman_worker_add_function)
	ZEND_FE(gearman_worker_work, arginfo_gearman_worker_work)
	ZEND_FE(gearman_worker_ping, arginfo_gearman_worker_ping)
	ZEND_FE(gearman_worker_enable_exception_handler, arginfo_gearman_worker_enable_exception_handler)
	ZEND_FE_END
};


static const zend_function_entry class_GearmanClient_methods[] = {
	ZEND_ME(GearmanClient, __construct, arginfo_class_GearmanClient___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(GearmanClient, __destruct, arginfo_class_GearmanClient___destruct, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(returnCode, gearman_client_return_code, arginfo_class_GearmanClient_returnCode, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(error, gearman_client_error, arginfo_class_GearmanClient_error, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(getErrno, gearman_client_get_errno, arginfo_class_GearmanClient_getErrno, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(options, gearman_client_options, arginfo_class_GearmanClient_options, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(setOptions, gearman_client_set_options, arginfo_class_GearmanClient_setOptions, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(addOptions, gearman_client_add_options, arginfo_class_GearmanClient_addOptions, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(removeOptions, gearman_client_remove_options, arginfo_class_GearmanClient_removeOptions, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(timeout, gearman_client_timeout, arginfo_class_GearmanClient_timeout, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(setTimeout, gearman_client_set_timeout, arginfo_class_GearmanClient_setTimeout, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(addServer, gearman_client_add_server, arginfo_class_GearmanClient_addServer, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(addServers, gearman_client_add_servers, arginfo_class_GearmanClient_addServers, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(wait, gearman_client_wait, arginfo_class_GearmanClient_wait, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(doNormal, gearman_client_do_normal, arginfo_class_GearmanClient_doNormal, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(doHigh, gearman_client_do_high, arginfo_class_GearmanClient_doHigh, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(doLow, gearman_client_do_low, arginfo_class_GearmanClient_doLow, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(doBackground, gearman_client_do_background, arginfo_class_GearmanClient_doBackground, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(doHighBackground, gearman_client_do_high_background, arginfo_class_GearmanClient_doHighBackground, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(doLowBackground, gearman_client_do_low_background, arginfo_class_GearmanClient_doLowBackground, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(doJobHandle, gearman_client_do_job_handle, arginfo_class_GearmanClient_doJobHandle, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(doStatus, gearman_client_do_status, arginfo_class_GearmanClient_doStatus, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(jobStatus, gearman_client_job_status, arginfo_class_GearmanClient_jobStatus, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(jobStatusByUniqueKey, gearman_client_job_status_by_unique_key, arginfo_class_GearmanClient_jobStatusByUniqueKey, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(ping, gearman_client_ping, arginfo_class_GearmanClient_ping, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(addTask, gearman_client_add_task, arginfo_class_GearmanClient_addTask, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(addTaskHigh, gearman_client_add_task_high, arginfo_class_GearmanClient_addTaskHigh, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(addTaskLow, gearman_client_add_task_low, arginfo_class_GearmanClient_addTaskLow, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(addTaskBackground, gearman_client_add_task_background, arginfo_class_GearmanClient_addTaskBackground, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(addTaskHighBackground, gearman_client_add_task_high_background, arginfo_class_GearmanClient_addTaskHighBackground, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(addTaskLowBackground, gearman_client_add_task_low_background, arginfo_class_GearmanClient_addTaskLowBackground, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(runTasks, gearman_client_run_tasks, arginfo_class_GearmanClient_runTasks, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(addTaskStatus, gearman_client_add_task_status, arginfo_class_GearmanClient_addTaskStatus, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(setWorkloadCallback, gearman_client_set_workload_callback, arginfo_class_GearmanClient_setWorkloadCallback, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(setCreatedCallback, gearman_client_set_created_callback, arginfo_class_GearmanClient_setCreatedCallback, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(setDataCallback, gearman_client_set_data_callback, arginfo_class_GearmanClient_setDataCallback, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(setWarningCallback, gearman_client_set_warning_callback, arginfo_class_GearmanClient_setWarningCallback, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(setStatusCallback, gearman_client_set_status_callback, arginfo_class_GearmanClient_setStatusCallback, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(setCompleteCallback, gearman_client_set_complete_callback, arginfo_class_GearmanClient_setCompleteCallback, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(setExceptionCallback, gearman_client_set_exception_callback, arginfo_class_GearmanClient_setExceptionCallback, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(setFailCallback, gearman_client_set_fail_callback, arginfo_class_GearmanClient_setFailCallback, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(clearCallbacks, gearman_client_clear_callbacks, arginfo_class_GearmanClient_clearCallbacks, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(context, gearman_client_context, arginfo_class_GearmanClient_context, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(setContext, gearman_client_set_context, arginfo_class_GearmanClient_setContext, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(enableExceptionHandler, gearman_client_enable_exception_handler, arginfo_class_GearmanClient_enableExceptionHandler, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_GearmanJob_methods[] = {
	ZEND_ME(GearmanJob, __destruct, arginfo_class_GearmanJob___destruct, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(returnCode, gearman_job_return_code, arginfo_class_GearmanJob_returnCode, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(setReturn, gearman_job_set_return, arginfo_class_GearmanJob_setReturn, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(sendData, gearman_job_send_data, arginfo_class_GearmanJob_sendData, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(sendWarning, gearman_job_send_warning, arginfo_class_GearmanJob_sendWarning, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(sendStatus, gearman_job_send_status, arginfo_class_GearmanJob_sendStatus, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(sendComplete, gearman_job_send_complete, arginfo_class_GearmanJob_sendComplete, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(sendException, gearman_job_send_exception, arginfo_class_GearmanJob_sendException, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(sendFail, gearman_job_send_fail, arginfo_class_GearmanJob_sendFail, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(handle, gearman_job_handle, arginfo_class_GearmanJob_handle, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(functionName, gearman_job_function_name, arginfo_class_GearmanJob_functionName, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(unique, gearman_job_unique, arginfo_class_GearmanJob_unique, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(workload, gearman_job_workload, arginfo_class_GearmanJob_workload, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(workloadSize, gearman_job_workload_size, arginfo_class_GearmanJob_workloadSize, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_GearmanTask_methods[] = {
	ZEND_ME(GearmanTask, __construct, arginfo_class_GearmanTask___construct, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(returnCode, gearman_task_return_code, arginfo_class_GearmanTask_returnCode, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(functionName, gearman_task_function_name, arginfo_class_GearmanTask_functionName, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(unique, gearman_task_unique, arginfo_class_GearmanTask_unique, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(jobHandle, gearman_task_job_handle, arginfo_class_GearmanTask_jobHandle, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(isKnown, gearman_task_is_known, arginfo_class_GearmanTask_isKnown, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(isRunning, gearman_task_is_running, arginfo_class_GearmanTask_isRunning, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(taskNumerator, gearman_task_numerator, arginfo_class_GearmanTask_taskNumerator, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(taskDenominator, gearman_task_denominator, arginfo_class_GearmanTask_taskDenominator, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(data, gearman_task_data, arginfo_class_GearmanTask_data, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(dataSize, gearman_task_data_size, arginfo_class_GearmanTask_dataSize, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(sendWorkload, gearman_task_send_workload, arginfo_class_GearmanTask_sendWorkload, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(recvData, gearman_task_recv_data, arginfo_class_GearmanTask_recvData, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_GearmanWorker_methods[] = {
	ZEND_ME(GearmanWorker, __construct, arginfo_class_GearmanWorker___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(GearmanWorker, __destruct, arginfo_class_GearmanWorker___destruct, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(returnCode, gearman_worker_return_code, arginfo_class_GearmanWorker_returnCode, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(error, gearman_worker_error, arginfo_class_GearmanWorker_error, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(getErrno, gearman_worker_errno, arginfo_class_GearmanWorker_getErrno, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(options, gearman_worker_options, arginfo_class_GearmanWorker_options, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(setOptions, gearman_worker_set_options, arginfo_class_GearmanWorker_setOptions, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(addOptions, gearman_worker_add_options, arginfo_class_GearmanWorker_addOptions, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(removeOptions, gearman_worker_remove_options, arginfo_class_GearmanWorker_removeOptions, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(timeout, gearman_worker_timeout, arginfo_class_GearmanWorker_timeout, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(setTimeout, gearman_worker_set_timeout, arginfo_class_GearmanWorker_setTimeout, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(setId, gearman_worker_set_id, arginfo_class_GearmanWorker_setId, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(addServer, gearman_worker_add_server, arginfo_class_GearmanWorker_addServer, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(addServers, gearman_worker_add_servers, arginfo_class_GearmanWorker_addServers, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(wait, gearman_worker_wait, arginfo_class_GearmanWorker_wait, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(register, gearman_worker_register, arginfo_class_GearmanWorker_register, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(unregister, gearman_worker_unregister, arginfo_class_GearmanWorker_unregister, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(unregisterAll, gearman_worker_unregister_all, arginfo_class_GearmanWorker_unregisterAll, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(grabJob, gearman_worker_grab_job, arginfo_class_GearmanWorker_grabJob, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(addFunction, gearman_worker_add_function, arginfo_class_GearmanWorker_addFunction, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(work, gearman_worker_work, arginfo_class_GearmanWorker_work, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(ping, gearman_worker_ping, arginfo_class_GearmanWorker_ping, ZEND_ACC_PUBLIC)
	ZEND_ME_MAPPING(enableExceptionHandler, gearman_worker_enable_exception_handler, arginfo_class_GearmanWorker_enableExceptionHandler, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_GearmanException_methods[] = {
	ZEND_FE_END
};
