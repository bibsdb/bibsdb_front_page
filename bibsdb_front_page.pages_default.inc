<?php
/**
 * @file
 * bibsdb_front_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function bibsdb_front_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'bibsdb_frontpage';
  $page->task = 'page';
  $page->admin_title = 'Bibsdb frontpage';
  $page->admin_description = 'Front page.';
  $page->path = 'bibsdb_frontpage';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_bibsdb_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'bibsdb_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Bibsdb frontpage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'ding_layout_1';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'top_secondary' => NULL,
      'main_content' => NULL,
      'main_left_right' => NULL,
      'main_right_right' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
      'primary' => NULL,
      'secondary' => NULL,
      'tertiary' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'db6b8d94-297b-4644-a903-857a6cd09b5c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2bbb2948-80e8-484b-b077-e2c5b3df8b6d';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_groups-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2bbb2948-80e8-484b-b077-e2c5b3df8b6d';
    $display->content['new-2bbb2948-80e8-484b-b077-e2c5b3df8b6d'] = $pane;
    $display->panels['attachment_1_1'][0] = 'new-2bbb2948-80e8-484b-b077-e2c5b3df8b6d';
    $pane = new stdClass();
    $pane->pid = 'new-7518ffa0-fc72-426b-a9ad-82d00daf97e2';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'views_panes';
    $pane->subtype = 'bibsdb_frontpage_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7518ffa0-fc72-426b-a9ad-82d00daf97e2';
    $display->content['new-7518ffa0-fc72-426b-a9ad-82d00daf97e2'] = $pane;
    $display->panels['attachment_1_1'][1] = 'new-7518ffa0-fc72-426b-a9ad-82d00daf97e2';
    $pane = new stdClass();
    $pane->pid = 'new-b15233ee-77ce-4871-ad38-438db8d0f888';
    $pane->panel = 'primary';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Frontpage Links',
      'title' => '',
      'body' => '<div class="bibsdb-frontpage-links">
	<p><a href="http://dr.dk">Sådan søger du</a></p>
	<p><a href="/frontpage">Sådan reserverer du</a></p>
	<p><a href="/frontapage">Sådan fornyer du</a></p>
	<p><a href="/frontpage">Sådan betaler du dine gebyrer og regninger</a></p>
</div>
',
      'format' => 'html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b15233ee-77ce-4871-ad38-438db8d0f888';
    $display->content['new-b15233ee-77ce-4871-ad38-438db8d0f888'] = $pane;
    $display->panels['primary'][0] = 'new-b15233ee-77ce-4871-ad38-438db8d0f888';
    $pane = new stdClass();
    $pane->pid = 'new-67271bbe-e901-4ff4-8773-dd958d9c39b6';
    $pane->panel = 'primary';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_tabroll-ding_frontpage_tabroll';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'frontpage_promoter',
          'settings' => array(
            'promoter' => 'ding_tabroll',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '67271bbe-e901-4ff4-8773-dd958d9c39b6';
    $display->content['new-67271bbe-e901-4ff4-8773-dd958d9c39b6'] = $pane;
    $display->panels['primary'][1] = 'new-67271bbe-e901-4ff4-8773-dd958d9c39b6';
    $pane = new stdClass();
    $pane->pid = 'new-59a040b9-d019-4d7d-8cea-b5d0306608c0';
    $pane->panel = 'primary';
    $pane->type = 'carousel';
    $pane->subtype = 'carousel';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'frontpage_promoter',
          'settings' => array(
            'promoter' => 'ting_search_carousel',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '59a040b9-d019-4d7d-8cea-b5d0306608c0';
    $display->content['new-59a040b9-d019-4d7d-8cea-b5d0306608c0'] = $pane;
    $display->panels['primary'][2] = 'new-59a040b9-d019-4d7d-8cea-b5d0306608c0';
    $pane = new stdClass();
    $pane->pid = 'new-90af2f86-01c4-4674-80ce-8293fc4e7469';
    $pane->panel = 'secondary';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_news-ding_news_frontpage_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Library news',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '90af2f86-01c4-4674-80ce-8293fc4e7469';
    $display->content['new-90af2f86-01c4-4674-80ce-8293fc4e7469'] = $pane;
    $display->panels['secondary'][0] = 'new-90af2f86-01c4-4674-80ce-8293fc4e7469';
    $pane = new stdClass();
    $pane->pid = 'new-24e9368c-e0f9-4155-b486-d47477e74152';
    $pane->panel = 'tertiary';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_event-ding_event_list_frontpage';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '24e9368c-e0f9-4155-b486-d47477e74152';
    $display->content['new-24e9368c-e0f9-4155-b486-d47477e74152'] = $pane;
    $display->panels['tertiary'][0] = 'new-24e9368c-e0f9-4155-b486-d47477e74152';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['bibsdb_frontpage'] = $page;

  return $pages;

}
