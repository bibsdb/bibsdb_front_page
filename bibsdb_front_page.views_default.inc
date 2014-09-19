<?php
/**
 * @file
 * bibsdb_front_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bibsdb_front_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bibsdb_frontpage_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bibsdb Frontpage Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Themes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'content-blocks--wrapper';
  $handler->display->display_options['style_options']['column_classes'] = '';
  $handler->display->display_options['style_options']['first_column_classes'] = '';
  $handler->display->display_options['style_options']['last_column_classes'] = '';
  $handler->display->display_options['style_options']['row_classes'] = 'content-blocks--inner  content-blocks--two';
  $handler->display->display_options['style_options']['first_row_classes'] = '';
  $handler->display->display_options['style_options']['last_row_classes'] = '';
  $handler->display->display_options['style_options']['default_classes'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'front page node queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'ding_tabroll_frontpage' => 'ding_tabroll_frontpage',
    'bibsdb_front_page_content' => 'bibsdb_front_page_content',
    'ding_library_listing' => 0,
    'ding_groups_listning' => 0,
  );
  /* Field: Category (groups rows) */
  $handler->display->display_options['fields']['field_ding_group_category']['id'] = 'field_ding_group_category';
  $handler->display->display_options['fields']['field_ding_group_category']['table'] = 'field_data_field_ding_group_category';
  $handler->display->display_options['fields']['field_ding_group_category']['field'] = 'field_ding_group_category';
  $handler->display->display_options['fields']['field_ding_group_category']['ui_name'] = 'Category (groups rows)';
  $handler->display->display_options['fields']['field_ding_group_category']['label'] = '';
  $handler->display->display_options['fields']['field_ding_group_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ding_group_category']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_ding_group_category']['element_class'] = 'groups-list-group';
  $handler->display->display_options['fields']['field_ding_group_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_group_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_group_category']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_ding_group_list_image']['id'] = 'field_ding_group_list_image';
  $handler->display->display_options['fields']['field_ding_group_list_image']['table'] = 'field_data_field_ding_group_list_image';
  $handler->display->display_options['fields']['field_ding_group_list_image']['field'] = 'field_ding_group_list_image';
  $handler->display->display_options['fields']['field_ding_group_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_group_list_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_group_list_image']['element_class'] = 'groups-image-wrapper';
  $handler->display->display_options['fields']['field_ding_group_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_group_list_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_group_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_group_list_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_ding_group_list_image']['settings'] = array(
    'image_link' => '',
    'styles' => array(
      'breakpoint_1' => '768',
      'style_1' => 'ding_list_medium',
      'breakpoint_2' => '500',
      'style_2' => 'ding_list_small',
      'max_style' => 'ding_list_medium',
      'fallback_style' => 'ding_list_medium',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'groups-heading';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Lead */
  $handler->display->display_options['fields']['field_ding_group_lead']['id'] = 'field_ding_group_lead';
  $handler->display->display_options['fields']['field_ding_group_lead']['table'] = 'field_data_field_ding_group_lead';
  $handler->display->display_options['fields']['field_ding_group_lead']['field'] = 'field_ding_group_lead';
  $handler->display->display_options['fields']['field_ding_group_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_group_lead']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_group_lead']['element_class'] = 'groups-list-content';
  $handler->display->display_options['fields']['field_ding_group_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_group_lead']['element_default_classes'] = FALSE;
  /* Field: Link (arrow) */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['ui_name'] = 'Link (arrow)';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<i class="icon-chevron-right"></i>';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'groups-arrow-link';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_group' => 'ding_group',
  );

  /* Display: Bibsdb Front page content listing */
  $handler = $view->new_display('panel_pane', 'Bibsdb Front page content listing', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'I fokus lige nu';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Group Title Image */
  $handler->display->display_options['fields']['field_ding_group_title_image']['id'] = 'field_ding_group_title_image';
  $handler->display->display_options['fields']['field_ding_group_title_image']['table'] = 'field_data_field_ding_group_title_image';
  $handler->display->display_options['fields']['field_ding_group_title_image']['field'] = 'field_ding_group_title_image';
  $handler->display->display_options['fields']['field_ding_group_title_image']['ui_name'] = 'Group Title Image';
  $handler->display->display_options['fields']['field_ding_group_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_group_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_group_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_group_title_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_ding_group_title_image']['settings'] = array(
    'image_link' => 'content',
    'styles' => array(
      'breakpoint_1' => '768',
      'style_1' => 'ding_panorama_primary_small',
      'breakpoint_2' => '500',
      'style_2' => 'ding_panorama_primary_small',
      'max_style' => 'ding_panorama_primary_small',
      'fallback_style' => '',
    ),
  );
  /* Field: Group Content Lead */
  $handler->display->display_options['fields']['field_ding_group_lead']['id'] = 'field_ding_group_lead';
  $handler->display->display_options['fields']['field_ding_group_lead']['table'] = 'field_data_field_ding_group_lead';
  $handler->display->display_options['fields']['field_ding_group_lead']['field'] = 'field_ding_group_lead';
  $handler->display->display_options['fields']['field_ding_group_lead']['ui_name'] = 'Group Content Lead';
  $handler->display->display_options['fields']['field_ding_group_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_group_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_group_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_group_lead']['element_default_classes'] = FALSE;
  /* Field: Page Title Image */
  $handler->display->display_options['fields']['field_ding_page_title_image']['id'] = 'field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['table'] = 'field_data_field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['field'] = 'field_ding_page_title_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['ui_name'] = 'Page Title Image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_title_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_title_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_page_title_image']['type'] = 'cs_adaptive_image';
  $handler->display->display_options['fields']['field_ding_page_title_image']['settings'] = array(
    'image_link' => 'content',
    'styles' => array(
      'breakpoint_1' => '768',
      'style_1' => 'ding_panorama_primary_small',
      'breakpoint_2' => '500',
      'style_2' => 'ding_panorama_primary_small',
      'max_style' => 'ding_panorama_primary_small',
      'fallback_style' => '',
    ),
  );
  /* Field: Page Content Lead */
  $handler->display->display_options['fields']['field_ding_page_lead']['id'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['table'] = 'field_data_field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['field'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['ui_name'] = 'Page Content Lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_default_classes'] = FALSE;
  /* Field: Link to content */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Link to content';
  $handler->display->display_options['fields']['title_1']['label'] = 'Gå til';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'group-link';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['sorts']['position']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_group' => 'ding_group',
    'ding_page' => 'ding_page',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['pane_category']['name'] = 'Bibsdb';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['bibsdb_frontpage_content'] = array(
    t('Master'),
    t('Themes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('front page node queue'),
    t('<i class="icon-chevron-right"></i>'),
    t('Bibsdb Front page content listing'),
    t('I fokus lige nu'),
    t('Gå til'),
    t('[title]'),
    t('Bibsdb'),
  );
  $export['bibsdb_frontpage_content'] = $view;

  return $export;
}
