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
  /* Field: Broken/missing handler */
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
  /* Filter criterion: Content: Version (taxonomy_vocabulary_10) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['id'] = 'taxonomy_vocabulary_10_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['table'] = 'field_data_taxonomy_vocabulary_10';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['field'] = 'taxonomy_vocabulary_10_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_10_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['operator'] = 'taxonomy_vocabulary_10_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['identifier'] = 'taxonomy_vocabulary_10_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    25 => 0,
    46 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    38 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
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
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['vocabulary'] = 'vocabulary_10';

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
  $handler->display->display_options['fields']['taxonomy_vocabulary_10']['id'] = 'taxonomy_vocabulary_10';
  $handler->display->display_options['fields']['taxonomy_vocabulary_10']['table'] = 'field_data_taxonomy_vocabulary_10';
  $handler->display->display_options['fields']['taxonomy_vocabulary_10']['field'] = 'taxonomy_vocabulary_10';
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
  /* Field: Content: eBO Category */
  $handler->display->display_options['fields']['field_ebo_category']['id'] = 'field_ebo_category';
  $handler->display->display_options['fields']['field_ebo_category']['table'] = 'field_data_field_ebo_category';
  $handler->display->display_options['fields']['field_ebo_category']['field'] = 'field_ebo_category';
  /* Field: Content: Version */
  $handler->display->display_options['fields']['taxonomy_vocabulary_10']['id'] = 'taxonomy_vocabulary_10';
  $handler->display->display_options['fields']['taxonomy_vocabulary_10']['table'] = 'field_data_taxonomy_vocabulary_10';
  $handler->display->display_options['fields']['taxonomy_vocabulary_10']['field'] = 'taxonomy_vocabulary_10';
  $handler->display->display_options['path'] = 'documentation-all/private/vbo';
  $export['all_documentation_private'] = $view;

  return $export;
}
