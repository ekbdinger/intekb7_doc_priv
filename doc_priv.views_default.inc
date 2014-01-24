<?php
/**
 * @file
 * doc_priv.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function doc_priv_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_documentation_private';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Documentation Private';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Documentation Private';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['text'] = '<strong>[counter])</strong>';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_priv_file']['id'] = 'field_doc_priv_file';
  $handler->display->display_options['fields']['field_doc_priv_file']['table'] = 'field_data_field_doc_priv_file';
  $handler->display->display_options['fields']['field_doc_priv_file']['field'] = 'field_doc_priv_file';
  $handler->display->display_options['fields']['field_doc_priv_file']['click_sort_column'] = 'fid';
  /* Field: Content: Myecw folder */
  $handler->display->display_options['fields']['field_doc_myecw']['id'] = 'field_doc_myecw';
  $handler->display->display_options['fields']['field_doc_myecw']['table'] = 'field_data_field_doc_myecw';
  $handler->display->display_options['fields']['field_doc_myecw']['field'] = 'field_doc_myecw';
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_doc_version']['id'] = 'field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['field'] = 'field_doc_version';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  /* Field: Content: eBO Category */
  $handler->display->display_options['fields']['field_ebo_category']['id'] = 'field_ebo_category';
  $handler->display->display_options['fields']['field_ebo_category']['table'] = 'field_data_field_ebo_category';
  $handler->display->display_options['fields']['field_ebo_category']['field'] = 'field_ebo_category';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => 0,
    3 => '3',
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'priv_documentation' => 'priv_documentation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Myecw folder (field_doc_myecw) */
  $handler->display->display_options['filters']['field_doc_myecw_tid']['id'] = 'field_doc_myecw_tid';
  $handler->display->display_options['filters']['field_doc_myecw_tid']['table'] = 'field_data_field_doc_myecw';
  $handler->display->display_options['filters']['field_doc_myecw_tid']['field'] = 'field_doc_myecw_tid';
  $handler->display->display_options['filters']['field_doc_myecw_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_doc_myecw_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_doc_myecw_tid']['expose']['operator_id'] = 'field_doc_myecw_tid_op';
  $handler->display->display_options['filters']['field_doc_myecw_tid']['expose']['label'] = 'Myecw folder (field_doc_myecw)';
  $handler->display->display_options['filters']['field_doc_myecw_tid']['expose']['operator'] = 'field_doc_myecw_tid_op';
  $handler->display->display_options['filters']['field_doc_myecw_tid']['expose']['identifier'] = 'field_doc_myecw_tid';
  $handler->display->display_options['filters']['field_doc_myecw_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
  );
  $handler->display->display_options['filters']['field_doc_myecw_tid']['group_info']['label'] = 'Myecw folder (field_doc_myecw)';
  $handler->display->display_options['filters']['field_doc_myecw_tid']['group_info']['identifier'] = 'field_doc_myecw_tid';
  $handler->display->display_options['filters']['field_doc_myecw_tid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_doc_myecw_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'eBO',
      'operator' => 'or',
      'value' => array(
        1018 => '1018',
        1043 => '1043',
        1044 => '1044',
      ),
    ),
    2 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
    3 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
  );
  $handler->display->display_options['filters']['field_doc_myecw_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_doc_myecw_tid']['vocabulary'] = 'product';
  $handler->display->display_options['filters']['field_doc_myecw_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Version (field_doc_version) */
  $handler->display->display_options['filters']['field_doc_version_tid']['id'] = 'field_doc_version_tid';
  $handler->display->display_options['filters']['field_doc_version_tid']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['filters']['field_doc_version_tid']['field'] = 'field_doc_version_tid';
  $handler->display->display_options['filters']['field_doc_version_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_doc_version_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_doc_version_tid']['expose']['operator_id'] = 'field_doc_version_tid_op';
  $handler->display->display_options['filters']['field_doc_version_tid']['expose']['label'] = 'Version (field_doc_version)';
  $handler->display->display_options['filters']['field_doc_version_tid']['expose']['operator'] = 'field_doc_version_tid_op';
  $handler->display->display_options['filters']['field_doc_version_tid']['expose']['identifier'] = 'field_doc_version_tid';
  $handler->display->display_options['filters']['field_doc_version_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
  );
  $handler->display->display_options['filters']['field_doc_version_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_doc_version_tid']['vocabulary'] = 'vocabulary_10';
  /* Filter criterion: Content: eBO Category (field_ebo_category) */
  $handler->display->display_options['filters']['field_ebo_category_tid']['id'] = 'field_ebo_category_tid';
  $handler->display->display_options['filters']['field_ebo_category_tid']['table'] = 'field_data_field_ebo_category';
  $handler->display->display_options['filters']['field_ebo_category_tid']['field'] = 'field_ebo_category_tid';
  $handler->display->display_options['filters']['field_ebo_category_tid']['value'] = '';
  $handler->display->display_options['filters']['field_ebo_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ebo_category_tid']['expose']['operator_id'] = 'field_ebo_category_tid_op';
  $handler->display->display_options['filters']['field_ebo_category_tid']['expose']['label'] = 'eBO Category (field_ebo_category)';
  $handler->display->display_options['filters']['field_ebo_category_tid']['expose']['operator'] = 'field_ebo_category_tid_op';
  $handler->display->display_options['filters']['field_ebo_category_tid']['expose']['identifier'] = 'field_ebo_category_tid';
  $handler->display->display_options['filters']['field_ebo_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
  );
  $handler->display->display_options['filters']['field_ebo_category_tid']['vocabulary'] = 'ebo_categories';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['text'] = '<strong>[counter])</strong>';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_priv_file']['id'] = 'field_doc_priv_file';
  $handler->display->display_options['fields']['field_doc_priv_file']['table'] = 'field_data_field_doc_priv_file';
  $handler->display->display_options['fields']['field_doc_priv_file']['field'] = 'field_doc_priv_file';
  $handler->display->display_options['fields']['field_doc_priv_file']['click_sort_column'] = 'fid';
  /* Field: Content: Myecw folder */
  $handler->display->display_options['fields']['field_doc_myecw']['id'] = 'field_doc_myecw';
  $handler->display->display_options['fields']['field_doc_myecw']['table'] = 'field_data_field_doc_myecw';
  $handler->display->display_options['fields']['field_doc_myecw']['field'] = 'field_doc_myecw';
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_doc_version']['id'] = 'field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['field'] = 'field_doc_version';
  /* Field: Content: eBO Category */
  $handler->display->display_options['fields']['field_ebo_category']['id'] = 'field_ebo_category';
  $handler->display->display_options['fields']['field_ebo_category']['table'] = 'field_data_field_ebo_category';
  $handler->display->display_options['fields']['field_ebo_category']['field'] = 'field_ebo_category';
  $handler->display->display_options['path'] = 'documentation-all/private';

  /* Display: VBO */
  $handler = $view->new_display('page', 'VBO', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'priv_documentation::field_doc_myecw' => 'priv_documentation::field_doc_myecw',
          'priv_documentation::field_ebo_category' => 'priv_documentation::field_ebo_category',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::2' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['text'] = '<strong>[counter])</strong>';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_priv_file']['id'] = 'field_doc_priv_file';
  $handler->display->display_options['fields']['field_doc_priv_file']['table'] = 'field_data_field_doc_priv_file';
  $handler->display->display_options['fields']['field_doc_priv_file']['field'] = 'field_doc_priv_file';
  $handler->display->display_options['fields']['field_doc_priv_file']['click_sort_column'] = 'fid';
  /* Field: Content: Myecw folder */
  $handler->display->display_options['fields']['field_doc_myecw']['id'] = 'field_doc_myecw';
  $handler->display->display_options['fields']['field_doc_myecw']['table'] = 'field_data_field_doc_myecw';
  $handler->display->display_options['fields']['field_doc_myecw']['field'] = 'field_doc_myecw';
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_doc_version']['id'] = 'field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['field'] = 'field_doc_version';
  /* Field: Content: eBO Category */
  $handler->display->display_options['fields']['field_ebo_category']['id'] = 'field_ebo_category';
  $handler->display->display_options['fields']['field_ebo_category']['table'] = 'field_data_field_ebo_category';
  $handler->display->display_options['fields']['field_ebo_category']['field'] = 'field_ebo_category';
  $handler->display->display_options['path'] = 'documentation-all/private/vbo';
  $export['all_documentation_private'] = $view;

  $view = new view();
  $view->name = 'doc_priv_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'doc_priv_all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Documentation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'title' => 'title',
    'field_doc_date' => 'field_doc_date',
    'field_doc_file' => 'field_doc_file',
    'field_doc_product' => 'field_doc_product',
    'field_doc_version' => 'field_doc_version',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_file' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_product' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_version' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: File (field_doc_file:fid) */
  $handler->display->display_options['relationships']['field_doc_file_fid']['id'] = 'field_doc_file_fid';
  $handler->display->display_options['relationships']['field_doc_file_fid']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['relationships']['field_doc_file_fid']['field'] = 'field_doc_file_fid';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['text'] = '<strong>[counter])</strong>';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_file']['id'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['field'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['click_sort_column'] = 'fid';
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_doc_product']['id'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['table'] = 'field_data_field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['field'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['element_label_colon'] = FALSE;
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_doc_version']['id'] = 'field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['field'] = 'field_doc_version';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'priv_documentation' => 'priv_documentation',
  );
  /* Filter criterion: Content: Product (field_doc_product) */
  $handler->display->display_options['filters']['field_doc_product_tid']['id'] = 'field_doc_product_tid';
  $handler->display->display_options['filters']['field_doc_product_tid']['table'] = 'field_data_field_doc_product';
  $handler->display->display_options['filters']['field_doc_product_tid']['field'] = 'field_doc_product_tid';
  $handler->display->display_options['filters']['field_doc_product_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_doc_product_tid']['expose']['operator_id'] = 'field_doc_product_tid_op';
  $handler->display->display_options['filters']['field_doc_product_tid']['expose']['label'] = 'Product (field_doc_product)';
  $handler->display->display_options['filters']['field_doc_product_tid']['expose']['operator'] = 'field_doc_product_tid_op';
  $handler->display->display_options['filters']['field_doc_product_tid']['expose']['identifier'] = 'field_doc_product_tid';
  $handler->display->display_options['filters']['field_doc_product_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
  );
  $handler->display->display_options['filters']['field_doc_product_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_doc_product_tid']['vocabulary'] = 'product';
  $handler->display->display_options['filters']['field_doc_product_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Version (field_doc_version) */
  $handler->display->display_options['filters']['field_doc_version_tid']['id'] = 'field_doc_version_tid';
  $handler->display->display_options['filters']['field_doc_version_tid']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['filters']['field_doc_version_tid']['field'] = 'field_doc_version_tid';
  $handler->display->display_options['filters']['field_doc_version_tid']['value'] = '';
  $handler->display->display_options['filters']['field_doc_version_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_doc_version_tid']['expose']['operator_id'] = 'field_doc_version_tid_op';
  $handler->display->display_options['filters']['field_doc_version_tid']['expose']['label'] = 'Version (field_doc_version)';
  $handler->display->display_options['filters']['field_doc_version_tid']['expose']['operator'] = 'field_doc_version_tid_op';
  $handler->display->display_options['filters']['field_doc_version_tid']['expose']['identifier'] = 'field_doc_version_tid';
  $handler->display->display_options['filters']['field_doc_version_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
  );
  $handler->display->display_options['filters']['field_doc_version_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_doc_version_tid']['vocabulary'] = 'vocabulary_10';

  /* Display: All Table */
  $handler = $view->new_display('page', 'All Table', 'page');
  $handler->display->display_options['path'] = 'doc-priv-all';
  $handler->display->display_options['menu']['title'] = 'All';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_doc_product',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_file']['id'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['field'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['label'] = '';
  $handler->display->display_options['fields']['field_doc_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doc_file']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_doc_product']['id'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['table'] = 'field_data_field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['field'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['label'] = '';
  $handler->display->display_options['fields']['field_doc_product']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doc_product']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_doc_product']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_doc_product']['element_label_colon'] = FALSE;
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_doc_version']['id'] = 'field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['field'] = 'field_doc_version';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_doc_file_fid';
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[uri]" target="_blank"><img alt="" src="/modules/file/icons/application-pdf.png" /></a>';
  $handler->display->display_options['path'] = 'doc-priv-all/list';

  /* Display: Table by category */
  $handler = $view->new_display('page', 'Table by category', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_doc_product',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_doc_date' => 'field_doc_date',
    'field_doc_file' => 'field_doc_file',
    'field_doc_product' => 'field_doc_product',
    'field_doc_version' => 'field_doc_version',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_product' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_version' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'File';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_file']['id'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['field'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_file']['click_sort_column'] = 'fid';
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_doc_product']['id'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['table'] = 'field_data_field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['field'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['label'] = '';
  $handler->display->display_options['fields']['field_doc_product']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doc_product']['element_label_colon'] = FALSE;
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_doc_version']['id'] = 'field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['field'] = 'field_doc_version';
  $handler->display->display_options['path'] = 'doc-priv-all/table';

  /* Display: All Table */
  $handler = $view->new_display('page', 'All Table', 'page_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_doc_file_fid';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_file']['id'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['field'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['click_sort_column'] = 'fid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'File';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[uri]" target="_blank"><img alt="" src="/modules/file/icons/application-pdf.png" /></a>';
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Updated Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_doc_product']['id'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['table'] = 'field_data_field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['field'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['element_label_colon'] = FALSE;
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_doc_version']['id'] = 'field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['field'] = 'field_doc_version';
  $handler->display->display_options['path'] = 'doc-priv-all/files';
  $handler->display->display_options['menu']['title'] = 'Test';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Quick Search */
  $handler = $view->new_display('page', 'Quick Search', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documentation Quick Search';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = '2';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Please use the filters below and click "Apply" to find the documents you want';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_doc_file_fid';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_doc_file']['id'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['table'] = 'field_data_field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['field'] = 'field_doc_file';
  $handler->display->display_options['fields']['field_doc_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doc_file']['click_sort_column'] = 'fid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'File';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[uri]" target="_blank"><img alt="" src="/modules/file/icons/application-pdf.png" /></a>';
  /* Field: Content: Last Updated */
  $handler->display->display_options['fields']['field_doc_date']['id'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['table'] = 'field_data_field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['field'] = 'field_doc_date';
  $handler->display->display_options['fields']['field_doc_date']['label'] = 'Updated Date';
  $handler->display->display_options['fields']['field_doc_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Product */
  $handler->display->display_options['fields']['field_doc_product']['id'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['table'] = 'field_data_field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['field'] = 'field_doc_product';
  $handler->display->display_options['fields']['field_doc_product']['element_label_colon'] = FALSE;
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_doc_version']['id'] = 'field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['table'] = 'field_data_field_doc_version';
  $handler->display->display_options['fields']['field_doc_version']['field'] = 'field_doc_version';
  $handler->display->display_options['path'] = 'doc-priv-all/search';
  $handler->display->display_options['menu']['title'] = 'Test';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['doc_priv_all'] = $view;

  return $export;
}
