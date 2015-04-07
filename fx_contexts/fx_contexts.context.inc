<?php
/**
 * @file
 * fx_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fx_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'aggregation';
  $context->description = '';
  $context->tag = 'about';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        281 => 281,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '~node/*/edit' => '~node/*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-41',
        ),
        'views-related_pages-block_2' => array(
          'module' => 'views',
          'delta' => 'related_pages-block_2',
          'region' => 'content',
          'weight' => NULL,
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'related',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('about');
  $export['aggregation'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'anonymous';
  $context->description = 'not yet logged in';
  $context->tag = 'user';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-login' => array(
          'module' => 'menu',
          'delta' => 'menu-login',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('not yet logged in');
  t('user');
  $export['anonymous'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'authenticated';
  $context->description = '';
  $context->tag = 'user';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('user');
  $export['authenticated'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'book';
  $context->description = 'Hierarchical navigation within reference material';
  $context->tag = 'navigation';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Hierarchical navigation within reference material');
  t('navigation');
  $export['book'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'both_campus';
  $context->description = 'The site home page (calls to action)';
  $context->tag = 'about';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        22 => 22,
        23 => 23,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-related_pages-block' => array(
          'module' => 'views',
          'delta' => 'related_pages-block',
          'region' => 'content_upper',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-42',
        ),
      ),
    ),
    'debug' => array(
      'debug' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The site home page (calls to action)');
  t('about');
  $export['both_campus'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_page';
  $context->description = '';
  $context->tag = 'contact';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'webform-client-block-30652' => array(
          'module' => 'webform',
          'delta' => 'client-block-30652',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('contact');
  $export['contact_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'critique';
  $context->description = 'add comments etc for admin';
  $context->tag = 'admin';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~node/add/*' => '~node/add/*',
        '~node/*/edit' => '~node/*/edit',
        '~my-pages' => '~my-pages',
        '~login' => '~login',
        '~<front>' => '~<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'developer' => 'developer',
        'librarian' => 'librarian',
        'super admin' => 'super admin',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-old_url-block' => array(
          'module' => 'views',
          'delta' => 'old_url-block',
          'region' => 'sidebar_first',
          'weight' => '39',
        ),
        'views-critical_comments-block_1' => array(
          'module' => 'views',
          'delta' => 'critical_comments-block_1',
          'region' => 'sidebar_first',
          'weight' => '39',
        ),
        'fx_glue-show_hide_admin' => array(
          'module' => 'fx_glue',
          'delta' => 'show_hide_admin',
          'region' => 'sidebar_first',
          'weight' => '40',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('add comments etc for admin');
  t('admin');
  $export['critique'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'faq';
  $context->description = 'FAQ style page';
  $context->tag = 'faq';
  $context->conditions = array(
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:8:{s:4:"node";s:4:"node";s:7:"comment";i:0;s:4:"file";i:0;s:13:"taxonomy_term";i:0;s:19:"taxonomy_vocabulary";i:0;s:4:"user";i:0;s:15:"wysiwyg_profile";i:0;s:12:"rules_config";i:0;}',
        'field_name' => 'field_tags',
        'field_value' => '12',
        'field_empty' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-questions-block_1' => array(
          'module' => 'views',
          'delta' => 'questions-block_1',
          'region' => 'content',
          'weight' => '-25',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-24',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('FAQ style page');
  t('faq');
  $export['faq'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'The site home page (calls to action)';
  $context->tag = 'featured';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'plus_search-form' => array(
          'module' => 'plus_search',
          'delta' => 'form',
          'region' => 'main_top',
          'weight' => '-10',
        ),
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'main_top',
          'weight' => '-9',
        ),
        'menu-menu-home-actions' => array(
          'module' => 'menu',
          'delta' => 'menu-home-actions',
          'region' => 'main_top',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The site home page (calls to action)');
  t('featured');
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage_2';
  $context->description = 'The site home page';
  $context->tag = 'featured';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-9' => array(
          'module' => 'block',
          'delta' => '9',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu-menu-new-students' => array(
          'module' => 'menu',
          'delta' => 'menu-new-students',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'menu-menu-quick-links' => array(
          'module' => 'menu',
          'delta' => 'menu-quick-links',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The site home page');
  t('featured');
  $export['homepage_2'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'newspage';
  $context->description = '';
  $context->tag = 'news';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'context_by_node_166' => 'context_by_node_166',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news_feed-block' => array(
          'module' => 'views',
          'delta' => 'news_feed-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('news');
  $export['newspage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'overview_subpages';
  $context->description = '';
  $context->tag = 'about';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        215 => 215,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '~/node/*/edit' => '~/node/*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-34',
        ),
        'views-overview_subpages-block' => array(
          'module' => 'views',
          'delta' => 'overview_subpages-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'overview',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('about');
  $export['overview_subpages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resource_list';
  $context->description = '';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resources' => 'resources',
        'resources/list' => 'resources/list',
        'resources/list/*' => 'resources/list/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-8',
        ),
        'facetapi-8VR7Y4t5lin1DjL0CstXjO8NeJehPCgb' => array(
          'module' => 'facetapi',
          'delta' => '8VR7Y4t5lin1DjL0CstXjO8NeJehPCgb',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-2maHANYO7eppiygkRtxTNcmwIHh3ZezE' => array(
          'module' => 'facetapi',
          'delta' => '2maHANYO7eppiygkRtxTNcmwIHh3ZezE',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('search');
  $export['resource_list'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'subject_area_page';
  $context->description = 'show views of resources and subject librarian if viewing a subject page';
  $context->tag = 'subject';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'subject-area/*' => 'subject-area/*',
        'subject/*' => 'subject/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-subject_librarian_profile-block' => array(
          'module' => 'views',
          'delta' => 'subject_librarian_profile-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-taxonomy_description-block' => array(
          'module' => 'views',
          'delta' => 'taxonomy_description-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('show views of resources and subject librarian if viewing a subject page');
  t('subject');
  $export['subject_area_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'subject_librarians';
  $context->description = 'display list of subject librarians';
  $context->tag = 'subject';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        201 => 201,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-e63e497c1428cf47c2b9e5e2beb60a17' => array(
          'module' => 'views',
          'delta' => 'e63e497c1428cf47c2b9e5e2beb60a17',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('display list of subject librarians');
  t('subject');
  $export['subject_librarians'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'subject_pages';
  $context->description = 'Hierarchical navigation within website book';
  $context->tag = 'subject';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'subject-area/*' => 'subject-area/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Hierarchical navigation within website book');
  t('subject');
  $export['subject_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'summon_search';
  $context->description = '';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/153' => 'node/153',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('search');
  $export['summon_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tagged_search';
  $context->description = 'Node tagged \'search\' for display of search box';
  $context->tag = 'search';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        10 => 10,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Node tagged \'search\' for display of search box');
  t('search');
  $export['tagged_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tremough_woodlane';
  $context->description = '';
  $context->tag = 'about';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        22 => 22,
        23 => 23,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '~node/*/edit' => '~node/*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-34',
        ),
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
    'debug' => array(
      'debug' => 1,
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('about');
  $export['tremough_woodlane'] = $context;

  return $export;
}
