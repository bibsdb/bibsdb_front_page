<?php
/**
 * @file
 * bibsdb_front_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bibsdb_front_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bibsdb_front_page_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function bibsdb_front_page_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: bibsdb_front_page_content
  $nodequeues['bibsdb_front_page_content'] = array(
    'name' => 'bibsdb_front_page_content',
    'title' => 'Front Page content',
    'subqueue_title' => '',
    'size' => 4,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'ding_group',
      1 => 'ding_page',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
